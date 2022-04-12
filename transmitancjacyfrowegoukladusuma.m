                                                                                                     %	Dana jest transmitancja cyfrowego ukladu przyczynowego H(z)=N(z)/D(z), gdzie N(z) = 1.00, D(z) = 0.50 + 1.00*z^-1, podaj sumę pierwszych 10 próbek odpowiedzi impulsowej tego układu
clc
clear all
num=[1];
den=[0.5 1]; 
x=impz(num,den);
sum(x(1:10))
