import processing.serial.*;
printArray(Serial.list());
Serial myPort;     
myPort = new Serial( this, Serial.list()[0], 38400 );
String line="          "+"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000"+"          "+System.lineSeparator(); // Guard Bits at start of Transmission
myPort.write(line);
println(line);
String[] lines=loadStrings("datafile_1.txt");
int k=0;
int c=0;
for (int i = 0 ; i <3240; i=i+90) 
{ 
  String sub=lines[0].substring(i,i+90);
  sub="          "+ sub +"      " +  System.lineSeparator();  // Padding the data at start and end. Also attaching an end marker.
  myPort.write(sub);
  print(sub);
  c=i;;
 //delay(1);
}
String sub=lines[0].substring(c,c+75);
sub="      "+ sub +"      " +  System.lineSeparator(); 
print(sub);
sub="      "+ sub +"      " +  System.lineSeparator();  
String end ="          "+"000000000000000000000000000000000000000000000000000000000000000000000000000000000"+"          "+System.lineSeparator(); // Gurard Bits at End of Transmission
myPort.write(end);  
print(end);
print(lines.length);
myPort.stop();
