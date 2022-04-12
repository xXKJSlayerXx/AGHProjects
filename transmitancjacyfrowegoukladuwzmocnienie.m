                                                                                                          %	Dana jest transmitancja cyfrowego ukladu przyczynowego H(z)=N(z)/D(z), gdzie N(z) = 1.00, D(z) = 0.50 + 1.00*z^-1,
                                                                                                     % podaj wzmocnienie dla składowej stałej

% clc;
% clear all;
% close all;
% omg=0;
% n=1
% d=[0.5 1]
% f=filt(n,d)
% z=exp(j*omg)
% wynik =n(1)/(d(1)+d(2)*z^(-1))
% wynik=abs(wynik)

clc; 
clear all;
close all;
%wartośc pi dla wartości stałe wpisz 0


p=0;
z=p/pi;

[H,W]=freqz(1,[1, 0.5]);
if z==0
    mod_wzmocnienia=abs(H(1))

else
z=length(H)*z;
mod_wzmocnienia=abs(H(z))
end;
