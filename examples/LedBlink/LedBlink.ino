/**
 * Criado por Paçoca Tech
 * 
 * Youtube: https://www.youtube.com/channel/UCW6OP5j28zFsnKxpQ2v9CsA
 * Instagram: http://instagram.com/pacocatech
 * Github: http://github.com/pacocatech
 * E-mail: pacocatech@gmail.com
 * 
 * 
 * Basic control LED, apply blink effect
 */
#include "LedUtil.h"

#define ledRed 10

LedUtil led(ledRed);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Turn blink LED");
  led.pisca(500);  
}