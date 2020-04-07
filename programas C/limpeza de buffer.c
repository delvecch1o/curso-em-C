#include <stdio.h>
#include <stdlib.h>

int main(){
    void limparBuffer(void);
    char a, b, c;
    
    
	a = getchar(); // na primeira vez q é digitado o buffer recebe o caractere + a tecla enter,
//   fflush(stdin); // esta função não funciona em todos os sistemas operacionais, por exemplo no MAC ja da pau
	limparBuffer();

	b = getchar(); // quando foi teclado o enter, ele assumiu a segunda variavel b.
//    fflush(stdin);
    limparBuffer();

	c = getchar(); // e essa sugeira da telca enter fica no buffer, causando assim que esse ciclo aparece apenas 2 dados na saida
//    fflush(stdin);
    limparBuffer();
    
	printf("%c", a);
    printf("%c", b);
    printf("%c", c);
    
    
    
    
    return 0;
}

void limparBuffer(void){
	char c;
	while ((c = getchar()) != '\n' && c != EOF); //EOF significa final de arquivo
}
/*
uma solução é criar uma função para limpar o beffer
a função vai la no buffer e ler o que tem la e vai fazer isso enquanto nao encontrar a quebra de linha e nem EOF, 

*/