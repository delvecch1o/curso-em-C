#include <stdio.h>
#include <stdlib.h>

#define SIM 100
#define NAO -100

int main(){
	
	int x;
	printf("Digite um numero inteiro:");
	scanf("%d", &x);	
	
	if(x <= 10){
		printf("%d", NAO); // ele é alterado no pre procesamento para o valor de - 100
		
	} else {
		   printf("%d", SIM);	
	}
	
    getchar();
    return 0;
}