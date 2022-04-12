x=imread('lena256.pgm');   %wczytaj obraz
y=x(1:8,33:40);           %wczytaj 3 blok 8x8 
z=dct2(y);               %wyznacz 2d-dct
u=z(:);                 %zamiana macierzy na wektor
wynik=var(u(2:end))         %wariancja współczynników