#include <stdio.h>
#include <stdlib.h>

int main(){
  
    struct horario {  // definição da estrutura struct horario
		int horas;
		int minutos;
		int segundos;
		double teste;
		char letra;
	};
    
    struct horario agora; // declaração uma estrutura agora do tipo struct horario
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;
    
    struct horario depois;
    depois. horas = agora.horas + 10;
    depois.minutos = agora.minutos;
    depois.teste = 50.55/123;
    depois.letra = 'r';
    
    
    printf("%d\n", depois.horas);
    printf("%d\n", depois.minutos);
    printf("%f\n", depois.teste);
    printf("%c\n", depois.letra);
    
   
    
    system ("pause");
    return 0;
}