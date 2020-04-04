#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int vetor [3] = {1,2,3};
	int *ponteiro = vetor; //, dessa forma aponta para o primeiro membro q é 1, para acessar os valores dos outros membros &vetor[1] = 2
	
	printf("%d", *ponteiro);
	
    getchar();
    return 0;
}