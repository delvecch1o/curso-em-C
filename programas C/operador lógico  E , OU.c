#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade;
	
	printf("Digite sua idade: ");
	scanf ("%d", &idade);
	
	if (idade >= 20 && idade <= 40){
	printf("OK deu certo\n");	
	}
	else {
		printf("nao deu certo\n");
	}    
	
	system ("pause");
    return 0;
}