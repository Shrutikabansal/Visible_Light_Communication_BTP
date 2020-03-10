#include <SoftwareSerial.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd( 7, 8, 9, 10, 11, 12);
SoftwareSerial GSerial(1,0); 
char rec=0;

void setup()
{
  Serial.begin(9600);
  GSerial.begin(400);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print(" LiFi - Wireless");
  lcd.setCursor(0, 1);
  lcd.print(" Communication  ");
  delay(3000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(" using Light    ");
  lcd.setCursor(0, 1);
  lcd.print(" RX TESTING ..  ");
  delay(3000);
  lcd.clear();
}

void loop()
{
  if(GSerial.available() != 0)
  {    
    rec = GSerial.read();
  
      Serial.print(rec);
      lcd.print(rec);
    
  }
}
