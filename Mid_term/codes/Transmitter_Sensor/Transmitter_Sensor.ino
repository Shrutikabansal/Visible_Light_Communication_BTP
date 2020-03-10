int inPin = A1; // analog pin
#include <stdlib.h>
int radix=10;
char val[3];
char cel[3];
char fah[3];
void setup()
{
 Serial.begin(38400);
}

void loop()
{
            float value = 100;//analogRead(inPin);
            float millivolts = (value / 1024) * 5000;
            int celsius = (int)millivolts / 10; // sensor output is 10mV per degree Celsius
            int fahrenheit=(celsius * 9)/ 5 + 32;
            //Serial.write(itoa(value,val,radix));                        
            //Serial.write(" > ");                      
            Serial.write(itoa(celsius,cel,radix)); 
            //Serial.write(celsius);                        
            //Serial.write("degrees Celsius, ");            
            //Serial.write( itoa(fahrenheit,fah,radix ));// converts to fahrenheit                        
            
            delay(1500); // wait for one second
}
