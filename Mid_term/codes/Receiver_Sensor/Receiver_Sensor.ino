void setup() 
{  
  Serial.begin(38400);
}

void loop() {  
  if(Serial.available()>0)
  {
    Serial.write(Serial.read());
  }
}
