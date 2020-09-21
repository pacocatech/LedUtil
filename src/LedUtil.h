#ifndef LEDUTIL_H
#define LEDUTIL_H

#include "Arduino.h"

class LedUtil
{
public:
   LedUtil(byte pin);
   void liga();
   void desliga();
   void pisca(int timeDelay = 1000);
private:
   byte pino;
};
#endif