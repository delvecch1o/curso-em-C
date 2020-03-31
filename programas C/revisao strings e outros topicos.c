#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct dicionario {
	char palavra [20];
	char definicao [50];
};

bool compararStrings (const char palavra1[], const char palavra2[]){
	
	int i = 0;
	while(palavra1[i] == palavra2[i] 
					&& palavra1[i] != '\0' 
					&& palavra2[i] != '\0'){
		i++;
	}
	
	if (palavra1[i] == '\0' && palavra2[i] == '\0'){ // por exemplo ao final da palavra casa tem o caractere nulo \0 e se ao final das duas palavras tiver o caractere nulo \0 essa condição é verdadeira
		return true;
	} else {
		return false;
	}
}

int procurarStrings (const struct dicionario lingua[], const char procurar[],
					 const int numDePalavras){
					 	
	bool compararStrings (const char palavra1[], const char palavra2[]);
	int i = 0;
	while(i < numDePalavras){
		
		if (compararStrings(procurar, lingua [i].palavra)){
			return i ;
		} else {
			i++ ;
		}	
	}
	return -1;
}

int main(void){
    
    int procurarStrings (const struct dicionario lingua[], const char procurar[],
					 	 const int numDePalavras);
					 	 
     const int NUMERODEDEFINICOES = 7;
     char palavra [20] = {'\0'};
     int resultadoPesquisa;
    
    const struct dicionario portugues[7] = //[NUMERODEDEFINICOES] ou poderia ser assim
    {{"pao",       "Comida de farinha"},
  	 {"presunto",  "Comida de carne"},
     {"queijo",    "Comida derivada de leite"},
     {"reqeuijao", "Comida de passar no pao"},
     {"pizza",     "Tipico da Italia"},
     {"lanche",    "Tipico de Maringa"},
     {"sorvete",   "Tipico em qualquer estacao"}};
     
     printf("Digite uma palavra: ");
     scanf("%s", palavra);
     
     resultadoPesquisa = procurarStrings (portugues, palavra, NUMERODEDEFINICOES);
     
     if (resultadoPesquisa != -1){
     	printf("%s\n", portugues[resultadoPesquisa].definicao);
   } else {
	   printf("Palavra nao encontrada");
   }
    
    
    getchar();
    return 0;
}