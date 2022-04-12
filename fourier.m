clear all
N=10;
n=2;
n2=4
T=10;
T2=5
t=0:0.01:N-1;
funkcja=(sqrt(2/T))*cos((2*pi/T)*n*t)+(sqrt(2/T))*cos((2*pi/T)*n2*t);
wyk=(1/sqrt(T)*exp(j*(2*pi/T)*n*t))
plot(t,wyk)
%hold on
%plot(t,cos(n))