                                                                                                           %	Korzystając z metody okien zaprojektuj dolnoprzepustowy filtr FIR o całkowitej długości odpowiedzi impulsowej 2*N+1=15 i częstotliwości granicznej omega_g=pi/9, przyjmij okno prostokątne, podaj sumę pierwszych 7 próbek uzyskanej odpowiedzi.
clc; 
clear all; 
close all;
 %suma ilu
 s=7;
wgd = pi/8;
% wgg = pi/8;
L=15;
N=(L-1)/2;
 
%dolnoprzepustowy
for n=-N:N 
    if n==0
        hlp(n+N+1)=wgd/pi;
    else
        hlp(n+N+1)=(sin(wgd*n))/(pi*n);
    end
end
% % w razie gdyby był górnoprzepustowy
% % górnoprzepustowy
% for n=-N:N
%     if n==0
%       hgp(n+N+1)=1-wgg/pi;
%     else
%       hgp(n+N+1)=-(sin(wgg*n))/(pi*n);
%     end
% end
 
%filtr dolnoprzepustowy
%okno prostokatne
figure(1)
w=1;                        %W razie inneg okna, zmienić w na 
                            %w=hamming(2*N+1), albo wb=blackman(2*N+1), 
                            %w=hanning(2*N+1), 
hLPprost=w.*hlp;
stem(-N:N,hLPprost,'r')
wynik=sum(hlp(1:s))
