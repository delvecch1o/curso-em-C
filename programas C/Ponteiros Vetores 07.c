#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int vetor [3] = {1,2,3};
	
	int *ponteiro = vetor;
	*(ponteiro + 1) = 10; // esta sendo alterado o vetor da 1° posição 2 para 10.
	
	printf("%d\n", vetor[1]); 
	
	
	/*
	int *ponteiro = &vetor[0];
		++ponteiro;
		++ponteiro;
	printf ("%d\n", *ponteiro);
	
	ponteiro = &vetor[1];
	printf ("%p\n", ponteiro);
	

	ponteiro = &vetor[2];
	printf ("%d\n", *ponteiro); 
	*/
//	printf ("%p", ponteiro); //	printf ("%p", ponteiro) dessa maneira aponta para o real enderedo de memoria = 0029FEF0
	
	
	
    getchar ();
    return 0;
}