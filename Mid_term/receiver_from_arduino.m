clear variables;
close all;
 fclose(instrfind);
% a = arduino;
% readDigitalPin(a,'D13');



   s = serial("COM5", 'BaudRate', 38400, 'DataBits', 8);%, 'Parity', 'even', 'StopBits', 2);
   fopen(s);
   g = instrfind(s);
 t =  fread(s);
   Y = dec2bin(t);
  
  % fflush();

