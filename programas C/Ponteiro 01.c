#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x = 10;
	double y = 20.50;
	char z = 'a';
	
	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;
	
	double soma = *pX + *pY;
	
	int *resultado;
	//resultado = &x; aponta para o endereço de memoria = 2752240
	resultado = 2752240; //aponta para o valor de X = 10
	
	
	printf("Endereco x = %d - Valor x = %d\n", pX, *pX); // pX aponta para o endereço de memoria // *pX aponta para o valor de memoria
	printf("Endereco y = %d - Valor y = %f\n", pY, *pY);
	printf("Endereco z = %d - Valor z = %c\n", pZ, *pZ);
	
	printf("O valor da soma dos ponteiros x e y eh = %f\n", soma);
	printf("\n");
	printf(" Valor de x = %d\n", *resultado);
	
	
	
	
    getchar();
    return 0;
}