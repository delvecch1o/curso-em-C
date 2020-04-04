#include <stdio.h>
#include <stdlib.h>

struct lista {
	int valor;
	struct lista *proximo;
};

struct lista *procurarValor (struct lista *pLista, int valor){
	
	while (pLista != (struct lista *)0){ // (struct lista *)0 = aponta para zero,nulo
		if (pLista->valor == valor){
			return(pLista);
		} else {
			pLista = pLista->proximo;
		}
	}
	return (struct lista *) 0;
}

int main(){

	struct lista *procurarValor (struct lista *pLista, int valor);
	struct lista membro1, membro2, membro3;
	struct lista *resultado, *gancho = &membro1;
	int valor;
	
	membro1.valor = 5;
	membro2.valor = 10;
	membro1.valor = 15;
	
	membro1.proximo = &membro2;
	membro2.proximo = &membro3;
	membro3.proximo = 0 ; 
	
	printf("Digite os valores da pesquisa: ");
	scanf("%d", &valor);	
	
	resultado = procurarValor (gancho, valor);
	
	if(resultado == (struct lista *)0) {
		printf("Valor nao encontrado.\n");
		
	} else {
		printf("Valor %d encontrado.\n", resultado->valor);
	}
	
    getchar();
    return 0;
}