#if c_VL6180X == 1
void TaskVL6180X(void *parameters)
{
  for (;;)
  {
    if (OtaStart == true)
      vTaskDelete(NULL);
    delay(100);
    unsigned long VL6180X_LastTime = millis() - VL6180X_old;

    if (xSemaphoreX != NULL and VL6180X_LastTime > VL6180X_Repeat)
    {
      if (xSemaphoreTake(xSemaphoreX, (TickType_t)5) == pdTRUE)
      {
        unsigned long VL6180X_time = millis();
        syslog_ng("VL6180X Start " + fFTS(VL6180X_LastTime - VL6180X_Repeat, 0) + "ms");

        // Serial.print("Ambient: ");
        // syslog_ng("VL6180X Ambient:" + fFTS(s_vl6180X.readAmbientSingle(),0 ) );
        //  if (s_vl6180X.timeoutOccurred()) { syslog_err("VL6180X Ambient: TIMEOUT"); }

        // //Serial.print("\tRange: ");
        syslog_ng("VL6180X Range:" + fFTS(s_vl6180X.readRangeSingleMillimeters(), 0));

        // syslog_ng("VL6180X RangeRAW:" + fFTS(s_vl6180X.readRangeSingle(),0 ) );
        //  if (s_vl6180X.timeoutOccurred()) { syslog_err("VL6180X Range: TIMEOUT"); }

        // syslog_ng("VL6180X Range:" + fFTS(s_vl6180X.readRangeContinuousMillimeters(),0 ) );
        s_vl6180X.init();
        s_vl6180X.setTimeout(100);

        // autoscaling
        int vl6180XScalling = 3;
        s_vl6180X.setScaling(vl6180XScalling);
        int32_t rangemm = s_vl6180X.readRangeSingleMillimeters();

        if (rangemm < 250)
          vl6180XScalling = 1;
        if (rangemm >= 250 and rangemm < 500)
          vl6180XScalling = 2;
        if (rangemm >= 500)
          vl6180XScalling = 3;

        s_vl6180X.setScaling(vl6180XScalling);

        delay(100);
        long err = 0;
        float range0 = 0;
        unsigned cont = 0;
        unsigned long t = millis();
        while (millis() - t < 5000)
        {

          s_vl6180X.timeoutOccurred();
          range0 = s_vl6180X.readRangeSingleMillimeters();
          if (range0 != 256 * vl6180XScalling)
          {
            VL6180X_RangeRM.add(range0);
            //range = range0 + range;
            cont++;
          }
          else
          {
            syslog_err("VL6180X: Error range");
            err++;
          }
        }
        //if (cont > 0) Dist = range/cont/10;
        //Dist = VL6180X_RangeRM.getAverage(50) / 10;
        // Dist = VL6180X_RangeRM.getMedian() / 10;
        VL6180X_RangeAVG.add(VL6180X_RangeRM.getMedian() / 10);
        Dist=VL6180X_RangeAVG.getAverage();

        VL6180X_time = millis() - VL6180X_time;
         syslog_ng("VL6180X: dist=" + fFTS(Dist, 3));
        syslog_ng("VL6180X: range=" + String(rangemm)+" mm");
        syslog_ng("VL6180X: Scalling: " + String(vl6180XScalling));
        syslog_ng("VL6180X: Error/Count " + String(err) + "/" + String(cont));
        // syslog_ng("VL6180X: Highest= " + fFTS(VL6180X_RangeRM.getHighest(), 1));
        // syslog_ng("VL6180X: Lowest= " + fFTS(VL6180X_RangeRM.getLowest(), 1));

        syslog_ng("VL6180X " + fFTS(VL6180X_time, 0) + "ms end.");
        VL6180X_old = millis();
        xSemaphoreGive(xSemaphoreX);
      }
    }
  }
}
#endif // c_VL6180X