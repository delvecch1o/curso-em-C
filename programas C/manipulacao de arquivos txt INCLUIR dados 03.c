#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *file;
	file = fopen ("stringParteDois.txt", "a"); // "a" eh para incluir informações no arquivo
	
	if(file == NULL){
		printf ("Arquivo nao pode ser aberto");
		getchar();
		exit(1);
	}
	
	fprintf (file,"Primeira linha\n");
	
	char frase[] = "Segunda linha\n";
	fputs(frase, file);
	
	printf("\n");
	
	char caractere = '3'; // esta função recebe um caractere
	fputc(caractere, file);
	
	fclose (file);
	
    system ("pause");
    return 0;
}