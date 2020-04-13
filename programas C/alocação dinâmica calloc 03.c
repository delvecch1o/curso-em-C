#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *p;
	p = (int *) calloc (5, sizeof(int)); // nessa função ela inicia com o valor no bloco de memoria que foi alocado com zero 0
	
	int i;
	for (i = 0; i < 5; i++){
		printf("Endereco de p%d = %p | Valor de p%d = %d\n", i, (p+i), i, *(p+1));
	}
	
	
//	*p = 10; // acessa o primeiro membro de 5
//	*(p+1) = 5; // acessa o segundo membro de 5
	
//	printf("%d\n",*(p+1));
//    printf("%d\n",p[1]);
	
	
    system ("pause");
    return 0;
}