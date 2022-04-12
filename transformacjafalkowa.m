X=[132 131 130 131 131 132 133 131 131 133 132 132 138 134 135 134 135 133 132 135];
P = [0.5, 0.5];
N = length(X);
%round w miejscu wskazanym przez pytanie
for n=1:2:N-1
 if(n==N-1)
 X(n+1) = X(n+1) - round( sum(P .* [X(n), X(n)]) );
 else
 X(n+1) = X(n+1) - round( sum(P .* X(n+[0, 2])) );
 end
end
d = X(1+1:2:end);
mean(d)