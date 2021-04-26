#include <LiquidCrystal.h>

int Temp_PIN = 1;
float R = 4.8828125e-02;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Temperature:");
}

void loop() {
  // put your main code here, to run repeatedly:
  int T = analogRead(Temp_PIN);
  float temp = (float)T * R;
  lcd.setCursor(0, 1);
  lcd.print(temp);
  lcd.print(" C");
  delay(1000);
}
