                                                                                                                %	Korzystając z metody okien zaprojektuj cyfrowy filtr Hilberta o długości L=2*N+1=15, przyjmij okno prostokątne. Podaj wartość wzmocnienie filtra (moduł charakterystyki częstotliwościowej) dla częstotliwości omega=pi/7
clc;
clear all;
 L=15;
N=(L-1)/2; 
n1=-N:N;
omega_szukana=pi/7;
omega=linspace(-pi, omega_szukana, 1000000);
 
 
wh=hamming(2*N+1);
wb=blackman(2*N+1);
wr=rectwin(2*N+1);
 
for n=-N:N
    if n ~= 0
        h(n+N+1)=wh(n+N+1)/(pi*n)*(1-(-1)^n);
        b(n+N+1)=wb(n+N+1)/(pi*n)*(1-(-1)^n);
        r(n+N+1)=wr(n+N+1)/(pi*n)*(1-(-1)^n);
    elseif n==0
        h(n+N+1)=0;
        b(n+N+1)=0;
        r(n+N+1)=0;
    end
end
 
for z=1:length(omega)
    Hh(z)=sum(h.*exp(-j*omega(z).*n1));
    Hb(z)=sum(b.*exp(-j*omega(z).*n1));
    Hr(z)=sum(r.*exp(-j*omega(z).*n1));
end
wynik_prost = abs(Hr(end))  %Wynik dla prostokÄ…ta
wynik_black = abs(Hb(end))  %Wynik dla blackmana
wynik_Ham = abs(Hh(end))  %Wynik dla Hamminga

