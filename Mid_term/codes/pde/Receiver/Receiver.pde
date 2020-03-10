import processing.serial.*;
Serial mySerial;
PrintWriter output;
void setup() { // Setup the connection to the Serial Port.
   mySerial = new Serial( this, Serial.list()[0], 38400 );
   output = createWriter( "data.txt" );
}
void draw() { // Listens on the Serial Port for any incoming character and save it to a text file.
    if (mySerial.available() > 0 ) {
         String value = mySerial.readString();
         if ( value != null ) {
              output.println( value );
         }
    }
}

void keyPressed() {
    output.flush();  // Writes the remaining data to the file
    output.close();  // Finishes the file
    exit();  // Stops the program
}
