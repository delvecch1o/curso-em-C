#include <stdio.h>
#include <stdlib.h>

int main(){
	
	struct lista {
		int valor;
		struct lista *proximo;
	};
	
	struct lista membro1, membro2, membro3;
	struct lista *gancho = &membro1;
	
	membro1.valor = 10;
	membro2.valor = 20;
	membro3.valor = 30;
	
	membro1.proximo = &membro2;
	membro2.proximo = &membro3;
	membro3.proximo = (struct lista *)0;
	
	while (gancho != (struct lista *)0){
		printf("%d\n", gancho->valor);
		gancho = gancho->proximo;
	}
	
	
    getchar();
    return 0;
}