#include <stdio.h>
#include <stdlib.h>

int main(){
	
	struct horario {
		int hora;
		int minuto;
		int segundo;
	};
	
	struct horario agora, *depois; // são duas estruturas do tipo horario , agora e depois , só q depois eh um ponteiro.
	depois = &agora;
	
	depois->hora = 20;
	depois->minuto = 23;
	depois->segundo = 12;
	
	int somatorio = 100;
	struct horario antes;
	
	antes.hora = somatorio + depois->segundo; // 100+12 = 112
	antes.minuto = agora.hora + depois->minuto; // 20+23 = 43
	antes.segundo = depois->minuto + depois->segundo; // 12+23 = 35 
	
	printf("%d:%d:%d", antes.hora, antes.minuto, antes.segundo);
	
    getchar();
    return 0;
}