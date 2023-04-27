#if c_PCF8574 == 1
void TaskPCF8574(void *parameters) {
  for (;;) {
    if (OtaStart == true)
      vTaskDelete(NULL);
    vTaskDelay(100);

    unsigned long PCF8574_LastTime = millis() - PCF8574_old;

    if (xSemaphoreX != NULL and PCF8574_LastTime > PCF8574_Repeat) {
      if (xSemaphoreTake(xSemaphoreX, (TickType_t)5) == pdTRUE) {
        vTaskDelay(2000);
        unsigned long PCF8574_time = millis();
        syslog_ng("PCF8574 Start Task Run" + fFTS(PCF8574_LastTime - PCF8574_Repeat, 0) + "ms");

        PCF8574_cur = PCF8574_cur +1;
        if (PCF8574_cur>1) {
            PCF8574_cur=0;
        } 

        Wire.begin();
        Wire.beginTransmission(0x20);
        Wire.write(PCF8574_cur);
        Wire.endTransmission();
        syslog_ng("PCF8574 end");


        PCF8574_time = millis() - PCF8574_time;
        syslog_ng("PCF8574:" + fFTS(PCF8574_cur, 3));

        syslog_ng("PCF8574 " + fFTS(PCF8574_time, 0) + "ms end.");
        PCF8574_old = millis();
        xSemaphoreGive(xSemaphoreX);
        syslog_ng("PCF8574 Semaphore Give");
      }
    }
  }
}
#endif //c_PCF8574