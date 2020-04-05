#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
#define NULO 0

double areaCirculo (double raio){
	return raio * raio * PI;
	
}

int main(void){
	
	double areaCirculo (double raio);
	double r;
	int i = 3;
	
	while (i != NULO){
		printf("Digite o raio do circulo: ");
		scanf ("%f", &r);
		printf("A area do circulo eh %f\n", areaCirculo(r));
		--i;
	}
	
	
	system ("pause");
    return 0;
}