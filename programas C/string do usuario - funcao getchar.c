#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char linha [100];
	char caractere;
	int i = 0;
	
	printf("Digite seu nome completo:\n");
	
	do {
		caractere = getchar (); // getchar ela pega o que o usuario digita na linha de comando e pega um caractere, nesse caso vai add na variavel caractere 
		linha [i] = caractere;
		i++;
		
	} while (caractere != '\n'); // quando o usuario aperta a tecla enter o compilador entende como \n.
	
	linha [i - 1] = '\0'; // aqui acontece quando o usuaria digita o ENTER no qual sera a ultima posição e i e subtrai - 1 para valer como ultimo caractere \0 nulo
	
	printf("%s\n", linha);
	
	
	
    system("pause");
    return 0;
}