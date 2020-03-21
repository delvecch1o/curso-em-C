#include <stdio.h>
#include <stdlib.h>

int main(){
  
    struct horario {
		int horas;
		int minutos;
		int segundos;
		
	};
    
    struct horario agora;
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;
    
    printf("%d : %d : %d\n", agora.horas, agora.minutos, agora.segundos);
    
    system ("pause");
    return 0;
}