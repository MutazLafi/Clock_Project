// Libraries
#include <Wire.h>
#include "RTClib.h"
#include "DHT.h"
#include <LiquidCrystal_I2C.h>

#define DEBUG  // Debug Define for Serial Debugging Undefine it to hide Serial Statement
// Defines And Constant Variables

#define DHTPIN 9
#define DHTTYPE DHT11

//Variables

// Objects
RTC_DS3231 RTC;

DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C lcd(16, 2, 0x24);  // LCD Width , LCD height, LCD I2C Address

#include "classes.h"

ClockClass Clock;
TemperatureClass Temp;

void setup() {

#ifdef DEBUG
  Serial.begin(9600);
#endif

  Clock.begin();
  Temp.begin();

  Serial.println("Sensors Started");

  lcd.clear();
  lcd.setCursor(4, 0);

  lcd.print("Clock and");
  lcd.setCursor(1, 1);

  lcd.print("Temp Monitering");
}

void loop() {

  Clock.DisplayTime();   // Display Time on The Screen 

  Clock.DisplayDate();  // Display The Date on The Screen

  Temp.DisplayTemp();  // Display The Temperature 
}
