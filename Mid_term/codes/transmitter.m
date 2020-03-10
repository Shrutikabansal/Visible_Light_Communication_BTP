clear variables;
close all;
a=seriallist;
fclose(instrfind);
if(strcmp(a,"COM9")==0)
    disp('Device not connected.');
end
s=serial('COM9','BaudRate',38400,'DataBits',8);%,'Parity','even','StopBits',2);
fopen(s);
g=instrfind(s);
A=imread('cameraman.tif');
for i=1:1%length(A)
    for j=1:1
        x=(A(i,j));
        y=num2str(x);
        z=convertStringsToChars(y);
        %y = dec2bin(x);
        fprintf(s,z)
        disp(z);
        pause(1);
    end
end
fclose(s);
    