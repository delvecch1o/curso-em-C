#include <stdio.h>
#include <stdlib.h>

int main(){
	
	struct horario {
		int *pHora;
		int *pMinuto;
		int *pSegundo;
	};
	
	struct horario hoje;
	
	int hora = 200;
	int minuto = 300;
	int segundo = 400;
	
	hoje.pHora = &hora; // ponteiro "*pHora" aponta para o endereco de memoria da variavel "hora" que eh = 200; para acessar usa-se "&hora"
	hoje.pMinuto = &minuto;
	hoje.pSegundo = &segundo;
	
	printf("Hora - %d\n", *hoje.pHora);
	printf("Minuto - %d\n ", *hoje.pMinuto);
	printf("Segundo - %d\n",*hoje.pSegundo);
	
	*hoje.pSegundo = 1000;
	printf("Segundo - %d\n",*hoje.pSegundo);
	
    getchar();
    return 0;
}
