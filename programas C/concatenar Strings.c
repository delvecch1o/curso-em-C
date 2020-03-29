#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	void concatenarStrings (char string1 [], int tamanho1,  // vai juntar as plavras  brasil e crise.
							char string2 [], int tamanho2,
							char string3 [] );
	
	char palavra1 [] = {'b','r','a','s','i','l',' '};
	char palavra2 [] = {'c','r','i','s','e'};
	char novaPalavra [12];
	int i;

	concatenarStrings (palavra1,7,palavra2,5,novaPalavra);
	
	
	for (i = 0; i < 12; i++){
		printf("%c", novaPalavra[i]);
	}
	printf("\n");
	
	
   system ("pause");
    return 0;
}

	void concatenarStrings (char string1 [], int tamanho1,  
							char string2 [], int tamanho2,
							char string3 [] ){
	int i,j;
	for(i = 0; i < tamanho1; i++){
		string3[i] = string1[i];
}

	for (j = 0; j < tamanho2; j++){
		string3[tamanho1 + j] = string2[j];
	}							
								
}