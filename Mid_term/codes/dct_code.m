clc;
clear all;
close all;

x = imread('cameraman.tif');
subplot(1,3,1)
imshow(x);
title('Original Image');

y = dct2(x); % compression
subplot(1,3,2);
imshow(uint8(y)); % short integer of 8 bit (typecast) as the value available is double
title('Compression after using dct');

Rx = idct2(y(1:64,1:64)); % reconstruction
subplot(1,3,3);
imshow(uint8(Rx));
title('Reconstructed after using idct')