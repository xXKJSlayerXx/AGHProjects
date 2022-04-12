pod_sys_we = int(input("podaj podstawę systemu liczbowego danych wejściowych: "))    # wprowadzenie wartości poczatkowych
liczba_in = str(input("podaj cyfrę: "))
pod_sys_wy = int(input("podaj podstawę systemu liczbowego danych wyjściowych: "))

wart_cyfr = []                  # deklarowanie zmiennych
suma = 0
reszta = ""
licz = 0
dl = len(liczba_in)
nowa_licz=liczba_in.lower()     # zamiana dużych znaków w systemach >10 na małe

for i in range (dl):                                         # pętla kodera any2dec - pobiera po 1 cyfrze z podanej liczby
    if "0" <= nowa_licz[i] <="9":                            # warunek dla napotkanych cyfr
        wart_cyfr.append(int(nowa_licz[i]))                  # dodanie do listy napotkanej cyfry
    elif "a" <= nowa_licz[i] <"z":                           # warunek dla liter
        wart_cyfr.append(int(ord(nowa_licz[i])-ord("a")+10)) # dodanie wartości odpowiednio wyliczonej z tablicy ASCII
    wart_cyfr[i] = wart_cyfr[i]*(pod_sys_we**(dl-i-1))       # zamiana pojedyńczych cyfr na liczby w systemie 10
    suma = suma + wart_cyfr[i]                               # sumowanie powstałych cyfr - powstanie odpowiednika w systemie 10

while True:                                                 # pętla dekodera dec2any
    licz = suma//pod_sys_wy                                 # pobieranie liczby sprzed przecinka
    if suma%pod_sys_wy < 10:                                # warunek dla modulo <10 - cyfry
        reszta = str(suma%pod_sys_wy)+reszta                # przypisanie nowych wartosci dla dekodowanej liczby
    elif 10<=(suma%pod_sys_wy)<=35:                         # warunek dla pozycji znakowych od a do z
        reszta = str(chr(suma%pod_sys_wy+ord("a")-10))+reszta   #odwrotność warunku z kodera - znalezienie pozycji w ASCII, zamiana na znak i dopisanie
    suma = licz                                             # zmiana wartosci na której będą wykonywane obliczenia
    if licz== 0:                                            # warunek zakończenia pętli - koniec licznia
        break
# zmienna "reszta" jest zapisywana w taki sposób, by nie dodawać operacji odwracania
print(f"liczba wejściowa {nowa_licz}({pod_sys_we}) zapisana jako {reszta}({pod_sys_wy})")   # wypis zakodowanych wartości
