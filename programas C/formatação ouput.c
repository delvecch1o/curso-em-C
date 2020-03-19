#include <stdio.h>
#include <stdlib.h>

int main  (void) {
	int intVar = 999999;
	int intVar2 = 10;
	double doubleVar = 100.123456789;
	
	printf ("Variavel inteira (%%d) = %7d\n", intVar2); // %7d para pular as casas e alinhar
	printf ("Variavel inteira (%%i) = %i\n", intVar);
	printf ("Variavel inteira (%%x) = %x\n", intVar);
	printf ("Variavel inteira (%%o) = %o\n", intVar);
	printf("\n\n");
	
	printf ("Variavel doouble (%%f) = %.2f\n",doubleVar); // %.2f limita as casas decimais
	printf ("Variavel doouble (%%e) = %e\n",doubleVar);
	printf ("Variavel doouble (%%g) = %g\n",doubleVar);
	printf ("Variavel doouble (%%a) = %a\n",doubleVar);
	printf ("\n");
	
	system ("pause");
	return 0;
	
				
	
	
	
	
} 