// Libraries
#include <Wire.h>
#include "RTClib.h"
#include "dht.h"
#include <Liquid_Crystal_I2C.h>
// Defines And Constant Variables
#define DHTPIN 9
#define DHTTYPE DHT11

//Variables

// Objects
RTC_DS3231 RTC;

DHT dht(DHTPIN, DHTTYPE);

Liquid_Crystal_I2C lcd(16, 2, 0x24);   // LCD Width , LCD height, LCD I2C Address 

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}
