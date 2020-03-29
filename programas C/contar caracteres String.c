#include <stdio.h>
#include <stdlib.h>

int tamanhoString (char string[]){
	
	int numCaracteres = 0;
	
	while (string[numCaracteres] != '\0'){ // ao final de toda string tem o caractere \0 nulo, ou seja  o ciclo ira percorrer ate encontrar o caractere nulo
		numCaracteres++;
	}
	numCaracteres++; // para contar os caracteres ele tem q adicionar o caracteres \0 nulo, ou seja casa = 5 caractere.
	return numCaracteres;
	
}

int main(){
	
	int tamanhoString (char string[]);
	char stringUsuario [20];
	
	printf ("Digiteuma palavra (string) : ");
	scanf("%s",stringUsuario);
	
	int num = tamanhoString (stringUsuario);
	printf("A string %s possui %d caracteres.\n", stringUsuario,num);
	
    system("pause");
    return 0;
}

