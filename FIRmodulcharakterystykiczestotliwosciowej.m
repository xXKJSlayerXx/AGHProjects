                                                                                                       %	Dana jest odpowiedź impulsowa filtru FIR, h=[1 -1 2 2]. Podaj wartość modułu charakterystyki częstotliwościowej tego filtru dla częstotliwości omega=pi/5
clc;
clear all;
format long
h = [1 -1 2 2]
n = 0:length(h)-1;
wg = pi/5;
H = abs(sum(h.*exp(j*wg*n)))
