clear variables;
close all;

fid=fopen('dataexport.txt','r');
i=1;
%data=zeros(256,256);
data=readmatrix('dataexport.txt',90,90,'int32');
fclose(fid);
%mtx = readmtx('binmat',10,10,'int16')