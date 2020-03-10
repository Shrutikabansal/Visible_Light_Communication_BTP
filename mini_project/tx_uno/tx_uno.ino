#include <LiquidCrystal.h>
#include <SoftwareSerial.h>
LiquidCrystal lcd(7,8,9,10,11,12);

#define switchPin1  2
#define switchPin2  4
#define switchPin3  5
#define switchPin4  6
#define ledpin 1

int switchState1 = 0;
int switchState2 = 0;
int switchState3 = 0;
int switchState4 = 0;

void setup() {
  
  lcd.begin(16, 2);
 
  pinMode(switchPin1,INPUT);
  pinMode(switchPin2,INPUT);
  pinMode(switchPin3,INPUT);
  pinMode(switchPin4,INPUT);
  
  Serial.begin(9600);
 
  lcd.setCursor(0, 0);
  lcd.print(" LiFi - Wireless");
  lcd.setCursor(0, 1);
  lcd.print(" Communication  ");
  delay(3000);
  lcd.clear();
 
}
void loop()  {

   switchState1 = digitalRead(switchPin1);
    switchState2 = digitalRead(switchPin2);
     switchState3 = digitalRead(switchPin3);
      switchState4 = digitalRead(switchPin4);
       
    if (switchState1 == HIGH)
         { 
          lcd.clear();
           lcd.setCursor(0, 0);
          boolean a =  lcd.print("0000");
            digitalWrite(ledpin, a);       
          delay(100);
         
         }
    else { 
      lcd.clear();
         }


     if (switchState2 == HIGH)
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("0001");
          delay(100);
         }
    else { 
      lcd.clear();
         }
    
       if (switchState3 == HIGH)
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("0010");
          delay(100);
         }
    else { 
      lcd.clear();
         }

     if (switchState4 == HIGH)
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("0011");
          delay(100);
         }
    else { 
      lcd.clear();
         }
    
}
