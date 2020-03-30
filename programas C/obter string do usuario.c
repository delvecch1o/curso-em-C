#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome [20];
	char sobrenome [20];
	
	printf("Isira seu nome e sobrenome:\n");
	scanf("%s%s", &nome, &sobrenome);
	
	printf("%s %s\n", nome , sobrenome);
	
	
	system("pause");
    return 0;
}
