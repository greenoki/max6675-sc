#include "max6675.h"

int thermoDO = D4;
int thermoCS = D5;
int thermoCLK = D6;

MAX6675 thermocouple(thermoCLK, thermoCS, thermoDO);
//int vccPin = 3;
//int gndPin = 2;
  
void setup() {
  Serial.begin(9600);
  // use Arduino pins 
//  pinMode(vccPin, OUTPUT); digitalWrite(vccPin, HIGH);
//  pinMode(gndPin, OUTPUT); digitalWrite(gndPin, LOW);
  
  Serial.println("MAX6675 test");
  // wait for MAX chip to stabilize
  delay(500);
}

void loop() {
  // basic readout test, just print the current temp
  
   Serial.print("C = "); 
   Serial.println(thermocouple.readCelsius());
   Serial.print("F = ");
   Serial.println(thermocouple.readFahrenheit());
 
   delay(1000);
}
