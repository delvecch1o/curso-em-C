#include <stdio.h>
#include <stdlib.h>

int main(){
	
	struct horario {
		int hora;
		int minuto;
		int segundo;
	};
	
	struct horario agora, *depois;
	depois = &agora;
	
//	*depois.hora = 20; // assim o compilador entende que depois.hora vem como um arguntemento primeiro pra dps apontar para o ponteiro
	(*depois).hora = 20; // dessa forma digo que primeiro vem meu ponteiro , pra dps executar a struct
	(*depois).minuto = 23;
	(*depois).segundo = 12;
	
	/*
	ou pode ser feito com o operador seta ->
	depois->hora = 20;
	depois->minuto = 23;
	depois->segundo = 12;
	
	*/
	
	printf("%d:%d:%d", agora.hora, agora.minuto, agora.segundo);
	
    getchar();
    return 0;
}