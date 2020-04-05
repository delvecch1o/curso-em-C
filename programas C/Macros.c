#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
#define DOIS_PI 2 * PI
#define AREA_CIRCULO(raio) raio * raio * PI 
/*
#define AREA_CIRCULO(raio) raio * raio * PI  // MACRO
para definir uma macro  "AREA_CIRCULO(raio)" escereve tudo com letra maiuscula o nome da MACRO
e entre parenteses (raio) é informado os argumentos que vai ser passado para essa macro
e em seguida na frente é executado "raio * raio * PI" a operação matematica ou qualquer coisa que queira fazer.

*/

int main(){
	
	printf ("%f\n", PI);
	printf ("%f\n", DOIS_PI);
	printf ("%f\n", AREA_CIRCULO(10));
	
    getchar();
    return 0;
}