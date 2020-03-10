clear variables;
close all;

fid=fopen('datafile_1.txt','r');
i=1;
%data1=zeros(90,1);
data=zeros(160,160);
if fid>0
    while(i<91)
    data1=textscan(fid,'%d8',40);
    data1=cell2mat(data1);
    data(i,1:length(data1))=data1';
    i=i+1;
    end
end
fclose(fid);
y2=idct2(data);
imshow(y2);
title("Reconstructed Image by using 32*32 Block");