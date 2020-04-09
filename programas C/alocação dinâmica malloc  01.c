#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p =(int *)malloc(sizeof(int)); // malloc é alocação de memoria // (int *) casting é forçado para retornar o ponteiro do tipo int
 	
	 if (p == NULL){ // isso pode acontecer caso o PC nao tenha memoria suficiente para alocar memoria.
		 printf("malloc nao funcionou");
	 }
 	
	 *p = 1000;
 	printf("%d\n", *p);
	
	 
	 // size_t  é uma variavel que pode assimir valores positivos necessariamente inteiros
	 
	/*
	 MALLOC nos especificamos quanto de memoria vamos precisar da memoria ram, e é solicitado ao SO,
	 e o SO  faz o gerenciamento de ir la ver qual memoria que nao esta alocada 
	 e RETORNA para nos essa função um PONTEIRO que aponta para o endereço de memoria para aquele
	 espaço/bloco de memoria que foi alocado.  
	*/
    system ("pause");
    return 0;
}