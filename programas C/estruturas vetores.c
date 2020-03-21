#include <stdio.h>
#include <stdlib.h>
int main (void){

struct horario {    
		int horas;    
		int minutos;
		int segundos;
	};
	
	struct horario teste [5]= // vai conter 5 vezes a struct horario, horas,minutos,segundos
	{{10,20,30},{20,30,40},{30,40,50},{40,50,60},{50,60,70}
	};
	int i;
	for (i = 0; i < 5; i++){
	printf("%d:%d:%d\n", teste[i].horas,
						 teste[i].minutos,		
						 teste[i].segundos);	
		
		
	}









//	teste [0].horas = 10; // esta indo para o bloco [0] do vetor q vai de 0 até 4.
//	teste [0].minutos = 20;
//	teste [0].segundos = 30;
	
//	printf("%d:%d:%d\n", teste[0].horas,
//						 teste[0].minutos,		
//						 teste[0].segundos);
    
    system ("pause");
    return 0 ;
}