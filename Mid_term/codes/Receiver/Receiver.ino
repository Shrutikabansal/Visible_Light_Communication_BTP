const byte numChars = 70;
char receivedChars[numChars];   // an array to store the received data
boolean newData = false;

void setup() 
{
    Serial.begin(38400);        
}

void loop() 
{ 
    recvWithEndMarker();
    showNewData();    
}
  
void recvWithEndMarker() 
{
    static byte ndx = 0;
    char endMarker = '\0';
    char rc;
    int i=3;
    //memset(&receivedChars[0],0,sizeof(receivedChars));
    while (Serial.available() > 0 && newData == false ) {
        rc = Serial.read();        
        if (rc != endMarker) 
        {
            receivedChars[ndx] = rc;
            ndx++;
            if (ndx >= numChars) 
            {
                ndx = numChars - 1;
            }
        }
        else 
        {                        
            ndx = 0;
            newData = true;              
        }
    }    
}

void showNewData() {
    if (newData == true) 
    {        
        Serial.println(receivedChars);
        memset(&receivedChars[0],0,sizeof(receivedChars));
        newData = false;
    }
