#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char x;
	
	while((x = getchar()) != '\n'){ 
		putchar(x); // a função putchar recebe o valor numerico do caractere que quero q aparece na tela de saida , ou seja essa função ira sempre REPLICAR O QUE FOR DIGITADO ate ser apertado a tecla enter
	}
	
	return 0;
}



/*
	Função GETCHAR !!! // ela obtem o proximo caractere do teclado, e exibe o caractere na tela de saida 
	
	char x[10]; // para acessar o ultimo membro é sempre o tamanho dele menos -1 , pq a contagem comeca em 0
	
	int i = 0;
	while ((x[i] = getchar()) != '\n' && i < 8){ // o numero 8 esta ali pq o ultimo caractere vai ser reservado para o caractere nulo \0 
		i++;
	}
	x[i++] = '\0'; // é para adicionar o caractere nulo
	printf("%s", x);
	
*/