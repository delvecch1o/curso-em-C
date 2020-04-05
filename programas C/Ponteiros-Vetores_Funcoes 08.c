#include <stdio.h>
#include <stdlib.h>

int somarVetor (int vetor[], const n){

	int soma = 0;
	int *ponteiro;
	int *const finalVetor = vetor + n;
	
	for (ponteiro = vetor; ponteiro < finalVetor; ponteiro++){ // esse ponteiro busca o endereço de memoria 2000000 por exemplo.
		soma = soma + *ponteiro; // busca o valor armazenado no endereco de memoria
		
	} 
		return soma;
}

int main(){
	
	int somarVetor(int vetor[], const int n);
	int vetor [10] = {-10,-10,5,5,5,5,5,5,5,5};
	
	printf("A soma dos membros do vetor = %d", somarVetor (vetor, 10));
	
	
    getchar();
    return 0;
}