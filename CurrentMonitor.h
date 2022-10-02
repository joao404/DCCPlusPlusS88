/**********************************************************************

CurrentMonitor.h
COPYRIGHT (c) 2013-2015 Gregg E. Berman

Part of DCC++ BASE STATION for the Arduino

**********************************************************************/

#ifndef CurrentMonitor_h
#define CurrentMonitor_h

#include "Arduino.h"

#define  CURRENT_SAMPLE_SMOOTHING   0.01
#if MOTOR_SHIELD_TYPE == 2
#define  CURRENT_SAMPLE_MAX         190
#else
#define  CURRENT_SAMPLE_MAX         300
#endif

#if defined ARDUINO_AVR_UNO || defined ARDUINO_AVR_NANO                      // Configuration for UNO
  #define  CURRENT_SAMPLE_TIME        10
#else                                         // Configuration for MEGA    
  #define  CURRENT_SAMPLE_TIME        1
#endif

struct CurrentMonitor{
  static long int sampleTime;
  int pin;
  float current;
  int offset;
  char *msg;
  CurrentMonitor(int, char *);
  static boolean checkTime();
  void check();
};

#endif
