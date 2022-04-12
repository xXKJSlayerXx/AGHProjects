clear all
T=4;
N=20;
omega0=(2*pi)/T
tal=T/4
d=tal/T
n=1:N
t=linspace(0,T,500)
l=linspace(-tal/2,tal/2,1000)
e=exp(1i*omega0*n*T)
calka=integral(e,-tal/2,tal/2)
%xn=(integral((exp(1i*omega0*n*T)),-tal/2,tal/2))*(1/T);
%for n=1:N
%xt=xn*exp(1i*((2*pi)/T)*n*t);
%plot(t,xt)
%hold on
%end