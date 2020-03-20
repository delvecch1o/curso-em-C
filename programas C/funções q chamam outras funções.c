#include <stdio.h>
#include <stdlib.h>

int main (void) {
	
	float somaDeDigitos (float numero1, float numero2);
	float a, b, soma;
	
	printf("Digite 1.o numero:  ");
	scanf ("%f",&a);
	printf("Digite 2.o numero:  ");
	scanf ("%f",&b);
	
	soma = somaDeDigitos (a,b);
	
	printf("A soma eh %f\n", soma);	
	
	
	system ("pause");
	return 0;
}

float somaDeDigitos (float numero1, float numero2){
	
	float valorAbsoluto (float x);
	
	if (numero1 < 0) {
		numero1 = valorAbsoluto (numero1);
	}
	if (numero2 < 0) {
		numero2 = valorAbsoluto (numero2);
	}
	
	return numero1 + numero2;
	
}
float valorAbsoluto (float x){
	
return x * - 1; // ira retornar um valor positivo caso ele seja negativo, multiplicado por menos -1 = +1 	
}