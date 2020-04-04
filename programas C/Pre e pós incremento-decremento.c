#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x = 1;
	int y = 0;
	
	y = ++x; // PRE incremento, soma mais 1 ao valor de x e atribui ao valor de y, ou seja "x" e "y" = 2
	
	/*
	y = x++; // POS incremento , aqui o y é coloca a ser igual ao valor de x mais 1
	 y = x;
	 x = x + 1;
	*/
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	
    getchar();
    return 0;
}