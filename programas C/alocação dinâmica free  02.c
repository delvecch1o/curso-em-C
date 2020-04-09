#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p = (int *)malloc(sizeof(int));
	*p = 1000;
	printf("%d\n", *p);
	
	free(p); // desaloca memoria
	printf("%d\n", *p);

	
	/*
	
	quando � chamada a fun��o free aloca��o de memoria que tinha sido feita ela 
	� devolvida para a memoria do computador, a memoria � devolvida ao SO , ou seja ela � desalocada
	
	s� que o valor 1000 continua ali, qualquer coisa que tenha sido escrito ali, vai continuar, 
	a fun��o free nao ira deletar esse valor , nao ira colocar um zero
	
	*/
	
	
    system ("pause");
    return 0;
}