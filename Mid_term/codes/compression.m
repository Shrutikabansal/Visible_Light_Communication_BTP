
clc;
close all;
clear all;

grayImage = uint8(importdata('Image_matlab.txt'));
imwrite(grayImage, 'myimage.tif');

figure
A = imread('myimage.tif');
subplot(1,3,1);
imshow(A);
title('Original Image');

B = dct2(A);
subplot(1,3,2);
imshow(uint8(B));
title('DCT Image');

B_part2 = zeros(length(B));
%t=length(B)

for i = 1:8:256
    for j = 1:8:256
        temp = zeros(8,8);
        for k = i:i+7
            for l = j:j+7
                if(rem(k,8)==0 || rem(l,8)==0)
                    temp(8,8) = A(k,l);
                else
                    temp(rem(k,8),rem(l,8)) = A(k,l);
                end
            end
        end
        C = dct2(temp);
        temp2 = zeros(8,8);
        for x = i:i+3
            for y = j:j+3
                if(rem(x,8)==0 || rem(y,8)==0)
                    temp2(8,8) = C(8,8);
                else
                    temp2(rem(x,8),rem(y,8)) = C(rem(x,8),rem(y,8));
                end
            end
        end
        D = idct2(temp2);
        
        for p = i:i+7
            for q = j:j+7
                if(rem(p,8)==0 || rem(q,8)==0)
                    B_part2(p,q) = D(8,8);
                else
                    B_part2(p,q) = D(rem(p,8),rem(q,8));
                end
            end
        end
    end
end
subplot(133)
imshow(uint8(B_part2));
title('New Image');

error = mean(mean((A-uint8(B_part2)).^2));