#include <stdio.h>
#include <stdlib.h>

#define NUMERO_MAXIMO_ALUNOS 1000

void umaFuncao (void) {
	printf("%d\n",NUMERO_MAXIMO_ALUNOS);
}

void umaOutraFuncao (void) {
	printf("%d\n",NUMERO_MAXIMO_ALUNOS);
}

int main(void){
	
	void umaOutraFuncao(void);
	void umaFuncao(void);
	
	printf("%d\n", NUMERO_MAXIMO_ALUNOS);
	umaFuncao ();
	umaOutraFuncao ();

	
    getchar();
    return 0;
}