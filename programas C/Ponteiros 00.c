#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int x = 10;
    int *ponteiro;
    ponteiro = &x;
    
    int y = 20;
    *ponteiro = y;
    
    printf(" %d \n %d\n", x ,y);
	
	
	
	
	/*
	int x;
	x = 10;
	int *ponteiro;
	ponteiro = &x; // &x acesso o endere�o de memoria, X acessa o valor da variavel
	
	printf("%d\n", *ponteiro); // sem o * � acessado o valor da memoria, sem o * � acessado o endere�o da memoria.
	*/
	
	
	
    getchar();
    return 0;
}