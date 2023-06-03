// classes.h File

class ClockClass {
public:

  void begin() {
    lcd.begin();

    if (!RTC.begin()) {
      Serial.println(Error in RTC);
      while (true)
        ;  // Loop forever

      lcd.clear();
      lcd.setCursor(0, 0);
    }
  }

  void DisplayTime() {
    lcd.clear();
    lcd.setCursor(0, 0);

    DateTime now = RTC.now();

    lcd.print(now.hour(), DEC);
    lcd.print(":");
    lcd.print(now.minute(), DEC);
  }

  void DisplayDate() {
    DateTime now = RTC.now();
    lcd.setCursor(0, 1);

    lcd.print(now.day(), DEC);
    lcd.print("/");
    lcd.print(now.month(), DEC);
    lcd.print("/");
    lcd.print(now.year(), DEC);
  }
};

class TemperatureClass {
public:
  void DisplayTemp() {
    float Temp = dht.readTemperature();

    lcd.clear();
    lcd.setCursor(11,0);
    lcd.print(Temp);
  }
};