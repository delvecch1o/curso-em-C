#include <stdio.h>
#include <stdlib.h>

struct horario {    // definição da estrutura
		int horas;    // variaveis dessa estrutura 
		int minutos;
		int segundos;
		
	};

int main(void){
  
    struct horario teste (struct horario x); /* nome da fnção eh teste , e recebe como argumento (struct horario x),
 												mas retorna tbm uma estrutura de tiopo horario */
    
    struct horario agora;
    agora.horas = 10;
    agora.minutos = 42;
    agora.segundos = 58;
    
    struct horario proxima;
    proxima = teste(agora);
    	printf("%d:%d:%d\n", proxima.horas, proxima.minutos, proxima.segundos);
    
    system ("pause");
    return 0 ;
}
struct horario teste (struct horario x){
	
	printf("%d:%d:%d\n", x.horas, x.minutos, x.segundos);
	
	x.horas = 100;
	x.minutos = 100;
	x.segundos = 100;
	
	
	
	return x;
}
