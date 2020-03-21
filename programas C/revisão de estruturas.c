#include <stdio.h>
#include <stdlib.h>

struct horario {    
		int horas;    
		int minutos;
		int segundos;
	};

int main (void){
	void receberHorarios (struct horario lista [5]); // vai conter 5 vezes a struct horario, horas,minutos,segundos
	void printHorarios (struct horario lista [5]);
	struct horario listaHoraios [5];
	
	receberHorarios (listaHoraios);
	printHorarios (listaHoraios);
	

 system ("pause");
    return 0 ;
}
void receberHorarios (struct horario lista [5]){
	
	int i;
	for (i = 0; i < 5; i++) {
		printf("Digite o %d primeiro horario (hh:mm:ss): ", i + 1); // coloca-se o mais um para q no ciclo aparece nop printf 1 horario dps soma mais um, 2 horario,3 horario...
		scanf ("%d:%d:%d", &lista[i].horas, &lista[i].minutos, &lista[i].segundos);
	}
	
	
}
void printHorarios (struct horario lista [5]){
	int i;
	for (i = 0; i < 5; i++){
		printf("o %d horario eh = %d:%d:%d\n", i + 1, lista[i].horas, lista[i].minutos, lista[i].segundos);
		
	}
	
	
	
}
