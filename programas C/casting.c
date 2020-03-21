#include <stdio.h>
#include <stdlib.h>

int main(){

	int x = 16;
	int y = 3;
	
	float resultado =(float) x / y;  // (float) x / y, o float antes das variaveis é o casting,aonde ele forca para retornar um valor do tipo float
	/*
	float esta recebendo uma divisao de duas variavel inteira "x e y"
	mas em vez de retornar uma valor quebrado  "em float"
	esta recebendo um resultado inteiro
	isso eh o casting ->(float)        x / y;  = 5,33333
	*/
	
	printf("%f\n", resultado);
	
	
	
   	system ("pause");
    return 0;
}