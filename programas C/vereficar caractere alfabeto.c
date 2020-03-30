#include <stdio.h>
#include <stdlib.h>

void alfabetico (char variavel){
	
	if ((variavel >= 'a' && variavel <= 'z') || (variavel >= 'A' && variavel <= 'Z')){ // o caractere 'a' e 'A' na linguagem C são diferentes
		printf("eh uma letra\n");
		
		
	} else {
		printf("nao eh uma letra\n");
		
	}

}

int main(){
	
	void alfabetico (char variavel);
	
	char nome [20];
	printf("Digite um palavra: ");
	scanf("%s", nome);

	int i = 0;
	while (nome [i] != '\0'){
		alfabetico (nome [i]);
		i++;
		
	}	
	
	
	
    system ("pause");
    return 0;
}