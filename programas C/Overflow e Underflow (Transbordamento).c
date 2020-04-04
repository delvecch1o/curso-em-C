#include <stdio.h>
#include <stdlib.h>

int main(){
	
	short x = 2147483647; // não possui byts o suficiente para aramazenar esse numero na variavel short, numero muito grande para armazenar na variavel short
	short y = -2147483648; // numero muito grande para armazenar na variavel short , com o valor negativo
	
	int a = 2147483647;
	int b = -2147483648;
	
	printf("%d\n", x);
	printf("%d\n", y);
	
	printf("%d\n", a);
	printf("%d\n", b);
	
	
	
	
    getchar();
    return 0;
}