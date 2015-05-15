// this library is public domain. enjoy!
// www.ladyada.net/learn/sensors/thermocouple
/*
#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
*/
#ifndef MAX6675_LIB
#define MAX6675_LIB
#include "application.h"
//#include "wire.h"
class MAX6675 {
public:
    MAX6675(int8_t sck_pin, int8_t cs_pin, int8_t miso_pin);

  double readCelsius(void);
  double readFahrenheit(void);
  // For compatibility with older versions:
  double readFarenheit(void) { return readFahrenheit(); }
 private:
  int8_t _sclk, _miso, _cs;
  uint8_t spiread(void);
};
#endif
