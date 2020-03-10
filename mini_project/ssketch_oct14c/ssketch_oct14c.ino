

#include <LiquidCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);

const int switchPin1 = 2;
const int switchPin2 = 4;
const int switchPin3 = 5;
const int switchPin4 = 6;

const int ledPin = 1;    

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
  
pinMode(ledPin,OUTPUT);


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
       
    if (switchState1 == HIGH && switchState2 == HIGH && switchState3 == HIGH && switchState4 == HIGH )
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("15");
             delay(1000);
             digitalWrite(ledPin, HIGH);   
             delay(1000);                       
             digitalWrite(ledPin, HIGH);    
            delay(1000);   
            digitalWrite(ledPin, HIGH);   
             delay(1000);                       
            digitalWrite(ledPin, HIGH);    
            delay(1000);     
         }
    else { 
      lcd.clear();
         }


  if (switchState1 == HIGH && switchState2 == HIGH && switchState3 == HIGH && switchState4 == LOW)
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("14");
          delay(1000);
          digitalWrite(ledPin, HIGH);   
             delay(1000);                       
             digitalWrite(ledPin, HIGH);    
            delay(1000);   
            digitalWrite(ledPin, HIGH);   
             delay(1000);                       
            digitalWrite(ledPin, LOW);    
            delay(1000);     
         }
    else { 
      lcd.clear();
         }
    
      if (switchState1 == HIGH && switchState2 == HIGH && switchState3 == LOW && switchState4 == HIGH )
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("13");
          delay(1000);
          digitalWrite(ledPin, HIGH);   
             delay(1000);                       
             digitalWrite(ledPin, HIGH);    
            delay(1000);   
            digitalWrite(ledPin, LOW);   
             delay(1000);                       
            digitalWrite(ledPin, HIGH);    
            delay(1000);     
         }
    else { 
      lcd.clear();
         }

    if (switchState1 == HIGH && switchState2 == HIGH && switchState3 == LOW && switchState4 == LOW)
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("12");
          delay(1000);
          digitalWrite(ledPin, HIGH);   
             delay(1000);                       
             digitalWrite(ledPin, HIGH);    
            delay(1000);   
            digitalWrite(ledPin, LOW);   
             delay(1000);                       
            digitalWrite(ledPin, LOW);    
            delay(1000);     
         }
    else { 
      lcd.clear();
         }
    
if (switchState1 == HIGH && switchState2 == LOW && switchState3 == HIGH && switchState4 == HIGH )
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("11");
          delay(1000);
           digitalWrite(ledPin, HIGH);   
             delay(1000);                       
             digitalWrite(ledPin, LOW);    
            delay(1000);   
            digitalWrite(ledPin, HIGH);   
             delay(1000);                       
            digitalWrite(ledPin, HIGH);    
            delay(1000);     
         }
    else { 
      lcd.clear();
         }


   if (switchState1 == HIGH && switchState2 == LOW && switchState3 == HIGH && switchState4 == LOW)
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("10");
          delay(1000);
         digitalWrite(ledPin, HIGH);   
             delay(1000);                       
             digitalWrite(ledPin, LOW);    
            delay(1000);   
            digitalWrite(ledPin, HIGH);   
             delay(1000);                       
            digitalWrite(ledPin, LOW);    
            delay(1000);     
         }
    else { 
      lcd.clear();
         }
    
      if (switchState1 == HIGH && switchState2 == LOW&& switchState3 == LOW && switchState4 == HIGH )
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("9");
          delay(1000);
         digitalWrite(ledPin, HIGH);   
             delay(1000);                       
             digitalWrite(ledPin, LOW);    
            delay(1000);   
            digitalWrite(ledPin, LOW);   
             delay(1000);                       
            digitalWrite(ledPin, HIGH);    
            delay(1000);     
         }
    else { 
      lcd.clear();
         }

     if (switchState1 == HIGH && switchState2 == LOW && switchState3 == LOW && switchState4 == LOW)
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("8");
          delay(1000);
         digitalWrite(ledPin, HIGH);   
             delay(1000);                       
             digitalWrite(ledPin, LOW);    
            delay(1000);   
            digitalWrite(ledPin, LOW);   
             delay(1000);                       
            digitalWrite(ledPin, LOW);    
            delay(1000);     
         }
    else { 
      lcd.clear();
         }
    



if (switchState1 == LOW && switchState2 == HIGH && switchState3 == HIGH && switchState4 == HIGH )
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("7");
          delay(1000);
        digitalWrite(ledPin, LOW);   
             delay(1000);                       
             digitalWrite(ledPin, HIGH);    
            delay(1000);   
            digitalWrite(ledPin, HIGH);   
             delay(1000);                       
            digitalWrite(ledPin, HIGH);    
            delay(1000);     
         }
    else { 
      lcd.clear();
         }


   if (switchState1 == LOW && switchState2 == HIGH && switchState3 == HIGH && switchState4 == LOW)
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("6");
          delay(1000);
          digitalWrite(ledPin, LOW);   
             delay(1000);                       
             digitalWrite(ledPin, HIGH);    
            delay(1000);   
            digitalWrite(ledPin, HIGH);   
             delay(1000);                       
            digitalWrite(ledPin, LOW);    
            delay(1000);     
         }
    else { 
      lcd.clear();
         }
    
      if (switchState1 == LOW && switchState2 == HIGH && switchState3 == LOW && switchState4 == HIGH )
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("5");
          delay(1000);
           digitalWrite(ledPin, LOW);   
             delay(1000);                       
             digitalWrite(ledPin, HIGH);    
            delay(1000);   
            digitalWrite(ledPin, LOW);   
             delay(1000);                       
            digitalWrite(ledPin, HIGH);    
            delay(1000);     
         }
    else { 
      lcd.clear();
         }

     if (switchState1 == LOW && switchState2 == HIGH && switchState3 == LOW && switchState4 == LOW)
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("4");
          delay(1000);
         digitalWrite(ledPin, LOW);   
             delay(1000);                       
             digitalWrite(ledPin, HIGH);    
            delay(1000);   
            digitalWrite(ledPin, LOW);   
             delay(1000);                       
            digitalWrite(ledPin, LOW);    
            delay(1000);     
         }
    else { 
      lcd.clear();
         }

if (switchState1 == LOW && switchState2 == LOW && switchState3 == HIGH && switchState4 == HIGH )
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("3");
          delay(1000);
         digitalWrite(ledPin, LOW);   
             delay(1000);                       
             digitalWrite(ledPin, LOW);    
            delay(1000);   
            digitalWrite(ledPin, HIGH);   
             delay(1000);                       
            digitalWrite(ledPin, HIGH);    
            delay(1000);     
         }
    else { 
      lcd.clear();
         }


   if (switchState1 == LOW && switchState2 == LOW && switchState3 == HIGH && switchState4 == LOW)
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("2");
          delay(1000);
          digitalWrite(ledPin, LOW);   
             delay(1000);                       
             digitalWrite(ledPin, LOW);    
            delay(1000);   
            digitalWrite(ledPin, HIGH);   
             delay(1000);                       
            digitalWrite(ledPin, LOW);    
            delay(1000);     
         }
    else { 
      lcd.clear();
         }
    
      if (switchState1 == LOW && switchState2 == LOW && switchState3 == LOW && switchState4 == HIGH )
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("1");
          delay(1000);
          digitalWrite(ledPin, LOW);   
             delay(1000);                       
             digitalWrite(ledPin, LOW);    
            delay(1000);   
            digitalWrite(ledPin, LOW);   
             delay(1000);                       
            digitalWrite(ledPin, HIGH);    
            delay(1000);     
         }
    else { 
      lcd.clear();
         }

     if (switchState1 == LOW && switchState2 == LOW && switchState3 == LOW && switchState4 == LOW)
         {
          lcd.clear();
           lcd.setCursor(0, 0);
            lcd.print("0");
          delay(1000);
          digitalWrite(ledPin, LOW);   
             delay(1000);                       
             digitalWrite(ledPin, LOW);    
            delay(1000);   
            digitalWrite(ledPin, LOW);   
             delay(1000);                       
            digitalWrite(ledPin, LOW);    
            delay(1000);     
         }
    else { 
      lcd.clear();
         }
}



