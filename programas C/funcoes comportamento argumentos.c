#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	void funcaoPrint (int x, int vetor []);
		int x = 10; // esse x nao eh  alterado entao ele continua a valendo 10.
		int vetor [3] = {10};
		
		funcaoPrint(x, vetor);
		
		printf("Variavel int na funcao principal = %d \n",x);
		printf("Vetor na funcao principal = %d \n", vetor [1]);
	
    system("pause");
    return 0;
}

void funcaoPrint (int x, int vetor []) {
	
	x = x + 10; // aqui eh alterado o valor de x q passa veler 20
	vetor [1] = 20;
	
	printf("Variavel int na funcao print = %d \n", x);
	printf("Vetor na funcao print = %d \n\n", vetor [1]);
	
	
}