#include "LedUtil.h"

#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "Arduino.h"

LedUtil::LedUtil(byte pin){
	pinMode(pin, OUTPUT);
	pino = pin;
}

void LedUtil::liga(){
	digitalWrite(pino, HIGH);
}

void LedUtil::desliga(){
	digitalWrite(pino, LOW);
}

void pisca(int timeDelay){
	liga();
	delay(timeDelay);
	desliga();
	delay(timeDelay);
}
