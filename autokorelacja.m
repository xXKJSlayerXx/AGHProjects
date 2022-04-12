clc, clear all, close all

x = [-14 -3 2 7 -3 16 -5 3 7 1];
p = 2;
kor = xcorr(x, x, p, 'normalized');
wynik = kor(end)