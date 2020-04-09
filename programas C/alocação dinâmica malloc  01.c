#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p =(int *)malloc(sizeof(int)); // malloc � aloca��o de memoria // (int *) casting � for�ado para retornar o ponteiro do tipo int
 	
	 if (p == NULL){ // isso pode acontecer caso o PC nao tenha memoria suficiente para alocar memoria.
		 printf("malloc nao funcionou");
	 }
 	
	 *p = 1000;
 	printf("%d\n", *p);
	
	 
	 // size_t  � uma variavel que pode assimir valores positivos necessariamente inteiros
	 
	/*
	 MALLOC nos especificamos quanto de memoria vamos precisar da memoria ram, e � solicitado ao SO,
	 e o SO  faz o gerenciamento de ir la ver qual memoria que nao esta alocada 
	 e RETORNA para nos essa fun��o um PONTEIRO que aponta para o endere�o de memoria para aquele
	 espa�o/bloco de memoria que foi alocado.  
	*/
    system ("pause");
    return 0;
}