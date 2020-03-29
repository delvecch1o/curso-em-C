#include <stdio.h>
#include <stdlib.h>

int main(){
//	char palavra [6] = {'B','r','a','s','i','l'};
//	char palavra [] =  {'B','r','a','s','i','l'};
//	char palavra [7] = {"Brasil"};
//	char palavra [] = {"Brasil"};
	char palavra [] = "Brasil\0"; // o caractere nulo \0 aparece no final de uma string somente para o compilador
	
	printf("%s\n",palavra);
	
    system ("pause");
    return 0;
}