
// Example 2 - Receive with an end-marker

const byte numChars = 70;
char receivedChars[numChars];   // an array to store the received data
boolean newData = false;

void setup() {
    Serial.begin(38400);
}
void loop() {
    recvWithEndMarker();
    showNewData();
}

void recvWithEndMarker() {
    static byte ndx = 0;
    char endMarker = '\n';
    char rc;
   
    while (Serial.available() > 0 && newData == false) {
        rc = Serial.read();

        if (rc != endMarker) {
            receivedChars[ndx] = rc;
            ndx++;
            if (ndx >= numChars) {
                ndx = numChars - 1;
            }
        }
        else {
            receivedChars[ndx] = '\0'; // terminate the string            
            ndx = 0;
            newData = true;
        }
    }
}

void showNewData() {
    if (newData == true) {
        //Serial.write("This just in ... ");
        Serial.write(receivedChars);
        newData = false;
    }
}
