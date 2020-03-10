%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%--------------------------------- DSP Lab -------------------------------%
%------------------------- Exp-06 Image Compression ----------------------%
%--------------------------- September 16, 2018 --------------------------%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

clc;
clear;
close all;

N=8;

beta = zeros(1,N);
for k=0:N-1
    if k==0
        beta(k+1) = 1/sqrt(2);
    else 
        beta(k+1) = 1;
    end
end

p = dct(8);  %% 2D toeplitz matrix

I1 = imread('cameraman.tif');
% figure;
% imshow(uint8(I1));
% title('original image');

N1 = 64;
I2 = I1(128:128+N1-1,128:128+N1-1);
% ind = 2;
% index = 2 ;

Z = zeros(N,N);
I3 =zeros(N,N);
for index1 = 1:8
    for index2 = 1:8
        I3(1:8,1:8) = I2(8*(index1-1)+1:8*(index1-1)+8,8*(index2-1)+1:8*(index2-1)+8);
        for k = 1:N
            for l = 1:N
                sum=0;
                for j = 1:N
                    for i = 1:N
                        sum = sum + (I3(i,j)*cos(pi*(2*i-1)*(k-1)/(2*N))*cos(pi*(2*j-1)*(l-1)/(2*N)));
                    end
                end
                Z(k,l) = (1/sqrt(2*N))*beta(k)*beta(l)*sum;
            end
        end

Zout = zeros(8,8);
Zout(1:4,1:4) = Z(1:4,1:4);
xout(8*(index1-1)+1:8*(index1-1)+8,8*(index2-1)+1:8*(index2-1)+8) = Zout(1:8,1:8);
zout(8*(index1-1)+1:8*(index1-1)+8,8*(index2-1)+1:8*(index2-1)+8) = idct2(xout(8*(index1-1)+1:8*(index1-1)+8,8*(index2-1)+1:8*(index2-1)+8));
    end
end
% figure;
% imshow(uint8(Z));
% title('compressed image');

figure;
subplot(211)
imshow(uint8(I2));
title('original image');

subplot(212)
imshow(uint8(zout));
title('reconstructed image');
	
