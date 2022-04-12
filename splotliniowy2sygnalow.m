                                                                                                       %	wyznacz splot liniowy dwóch sygnałów x=[1 2 3 4], y=[1 1 2 2]
                                                                                                        % podaj sumę 3 pierwszych próbek tego splotu

clc;
clear all;
x=[1 2 3 4];
y=[1 2 1 2];
%ilu próbek suma 
s=3
z = conv(x,y)
wynik=sum(z(1:s))
