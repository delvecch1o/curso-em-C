#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char x[100];
    int i = 0;
    while((x[i] = fgetc(stdin)) != '\n'){
    	++i;
	}
	x[i] = '\0';
	printf ("%s\n",x);
		
		
//	x[0] = fgetc(stdin); // stdin ler a entrada do teclado
//    printf("%c\n", x[0]);	// ira ler apenas um caractere .	
  
    system("pause");
    return 0;
}

/*

Podem ser implemantada como uma MACRO ou FUNÇÃO

getc é uma FUNÇÃO tambem, mas pode ser uma MACRO na lingagem C
fgetc é uma FUNÇÃO

*/