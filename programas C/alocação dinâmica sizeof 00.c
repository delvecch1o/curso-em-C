#include <stdio.h>
#include <stdlib.h>

struct x {
	int a;
	int b;
	int c;
};

int main(){
	
	struct x estrutura;
	int x; // 4 byts
	double y; // 8 byts
	int vetor [10];
	
	printf("int x = %li byts\n", sizeof(x)); // = 4
	printf("double y = %li byts\n", sizeof(y)); // = 8
	printf("short = %li byts\n", sizeof(short)); // = 2 
	printf("long int = %li byts\n", sizeof(long int)); // = 4
	printf("float = %li byts\n", sizeof(float)); // = 4
	printf("int vetor [10] = %li byts\n", sizeof(vetor)); // = 40
	printf("struct int a ,int b , int c = %li byts\n", sizeof(estrutura)); // 12 byts
	
		
//	sizeof() // sizeof traz o tamanho em byts daquele tipo de dado 
	
    system ("pause");
    return 0;
}