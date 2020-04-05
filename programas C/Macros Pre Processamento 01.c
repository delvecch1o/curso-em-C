#include <stdio.h>
#include <stdlib.h>

#define MAIOR(x, y) x > y ? x : y // operador condicional "? caso sim retorne x" ... ": caso nao retorne y" 
#define E_MINUSCULO(char) char >= 'a' && char <= 'z'

int main(){
	
char x = 'a';

if (E_MINUSCULO(x)){
	printf("E uma letra minuscula\n");
}else {
	printf("Nao eh uma letra minuscula\n");
}
	
	printf("%d", MAIOR(10,50));
	
    getchar();
    return 0;
}