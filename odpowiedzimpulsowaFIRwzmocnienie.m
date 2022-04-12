clc;
clear all;
format long
h = [1 1 2 2]
n = 0:length(h)-1;
wg = pi/5;
H = abs(sum(h.*exp(j*wg*n)))
