#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *file;
	file = fopen("E:\\Projetos UniFCV\\Projeto C\\aula 81 manipulação de arquivos\\teste.txt", "w");
	fprintf(file,"Hoje eh Domingo,dia 5 de abril de 2020 as 22:30\n");
	fclose(file);
	
	
    getchar();
    return 0;
}