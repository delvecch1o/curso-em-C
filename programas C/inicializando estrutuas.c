#include <stdio.h>
#include <stdlib.h>
int main (void){
struct horario {    
		int horas;    
		int minutos;
		int segundos;
		
	}proxima = {10,20,30}; // e poderias deixar assim tbm
	
	//struct horario proxima; ou  poderia deixar assim
    //proxima.horas = 10;  
	//proxima.minutos = 20;
	//proxima.segundos = 30;
	
	
		printf("%d:%d:%d\n", proxima.horas, proxima.minutos, proxima.segundos);
    
    system ("pause");
    return 0 ;
}