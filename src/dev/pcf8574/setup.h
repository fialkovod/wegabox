#if c_PCF8574 == 1
    syslog_ng("PCF8574 start initial config for 0 port");
    Wire.begin();
    Wire.beginTransmission(0x20);
    Wire.write(0x0);
    Wire.endTransmission();
    syslog_ng("PCF8574 end of initial config");

    //if ( adc1_get_raw(NTC_port) > 0){
    long PCF8574_TaskErr = xTaskCreate(TaskPCF8574,"TaskPCF8574",60000,NULL,0,NULL);
    syslog_ng("PCF8574: add Task:" + String(PCF8574_TaskErr));
    //}
    //else
    //syslog_err("PCF8574: The PCF8574 is not detected");
    //#endif

#endif //c_PCF8574