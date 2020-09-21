#include "LedUtil.h"

LedUtil::LedUtil(byte pin){
	pinMode(pin, OUTPUT);
	pino = pin;
}

void LedUtil::liga(){
	digitalWrite(pino, HIGH);
}

void  LedUtil::desliga(){
	digitalWrite(pino, LOW);
}

void  pisca(int delay){
	liga();
	delay(delay);
	desliga();
	delay(delay);
}
