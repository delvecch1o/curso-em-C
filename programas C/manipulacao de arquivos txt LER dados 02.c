#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *file;
	file = fopen ("string.txt", "r");
	
	if (file == NULL){
		printf("Nao foi possivel abrir o arquivo.\n");
		getchar();
		exit(0);
	}
	
	char frase [100];
	
	while (fgets(frase, 100, file) != NULL){ // fgets sempre vai retornar uma string
		   printf("%s", frase);	// OBS. fgets se nessa função o usuario digitar numeros essa função ira ler como uma string e vai retornar algo totalmente errado.
	}
	
	fclose(file);
	printf("\n");
	
    system ("pause");
    return 0;
}