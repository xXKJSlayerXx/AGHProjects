clear all;
close all; 
clc;
d=[-186, -155, -124, -93, -62, -31, 0, 31, 62, 93, 124]; %współczynniki
n=[1, 2, 23, 120, 494, 8734, 46543, 8776, 730, 98, 15]; %liczebność
pi=n/sum(n);
H=-sum(pi.*log2(pi)) %entropia