#if c_NTC == 1
if (c_PCF8574 == 1) {
    for(i=0; i<16; i++) {
        PCF8574_values[i] -> NTCRM = RunningMedian(20);
        PCF8574_values[i] -> NTC = 0;
    }
}
RunningMedian NTCRM = RunningMedian(20);
 #define NTC_port ADC1_CHANNEL_4 // gpio32
 #define NTC_MiddleCount 10000
unsigned long NTC_old = millis();
unsigned long NTC_Repeat = 5000;
#endif