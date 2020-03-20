#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int fatorial (int x);
	int numero, resultado;
	
	printf("Digite um numero inteiro: ");
	scanf ("%d",&numero);
	
	resultado = fatorial (numero);

	printf("O fatoral eh %d\n", resultado);	
	
    system ("pause");
    return 0;
}
int fatorial (int x){
	 
	 int resultado;
	  if (x == 0) {
		  resultado = 1;
	  } 
	  else {
		  resultado = x * fatorial(x - 1); // 3 * 2* 1*  
		  
	  }
	return resultado;
	
}