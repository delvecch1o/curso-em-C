#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p = (int *)malloc(sizeof(int));
	*p = 1000;
	printf("%d\n", *p);
	
	free(p); // desaloca memoria
	printf("%d\n", *p);

	
	/*
	
	quando é chamada a função free alocação de memoria que tinha sido feita ela 
	é devolvida para a memoria do computador, a memoria é devolvida ao SO , ou seja ela é desalocada
	
	só que o valor 1000 continua ali, qualquer coisa que tenha sido escrito ali, vai continuar, 
	a função free nao ira deletar esse valor , nao ira colocar um zero
	
	*/
	
	
    system ("pause");
    return 0;
}