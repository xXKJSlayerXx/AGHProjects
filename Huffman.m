clc, clear all, close all

symbole = {'A' 'B' 'C' 'D' 'E'};
slownik = {'A',[0,0,0]; 'B',[0,0,1]; 'C',[0,1,0]; 'D',[0,1,1]; 'E',1}
kod = [0 0 1 0 0 0 1 0 1 1 1 0 0 1];
zakodowanie = huffmanenco(symbole, slownik)
odkodowanie = huffmandeco(kod, slownik)

%--------------------------------
%Jeśli nie ma biblioteki
%--------------------------------

A = [0 0 0];
B = [0 0 1];
C = [0 1 0];
D = [0 1 1];
E = 1;
kod = [0 0 1 0 0 0 1 0 1 1 1 0 0 1];

l = [length(A), length(B), length(C), length(D), length(E)];

while length(kod)>0
    for j=1:max(l)
        if isequal(kod(1:j),A)
            disp('A')
            kod(1:j) = '';
        elseif isequal(kod(1:j),B)
            disp('B')
            kod(1:j) = '';
        elseif isequal(kod(1:j),C)
            disp('C')
            kod(1:j) = '';
        elseif isequal(kod(1:j),D)
            disp('D')
            kod(1:j) = '';
        elseif isequal(kod(1:j),E)
            disp('E') 
            kod(1:j) = '';
        end
    end
end
