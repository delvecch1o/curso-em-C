#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE *file;
    file = fopen ("LER numero.txt", "r"); // se nao encontrar o arquivo de texte ele cai no IF
    
    if (file == NULL){
		printf ("Arquivo nao pode ser aberto\n");
		getchar();
		return 0;
	} 
    
    int x, y, z;
    
    
    fscanf(file, "%d %d %d", &x, &y, &z);
    
    printf("%d %d %d\n", x, y ,z);
    
    fclose(file);
  
    
    
	getchar();
    return 0;
}


  /*

    r - para LER um arquivo
    w - para ESCREVER um arquivo 
    a - ALTERAR um arquivo
    
  */