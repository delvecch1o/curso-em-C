#include <stdio.h>
#include <stdlib.h>

int main(){

	char x[100];
	
	FILE *file = fopen("otimo.txt","r");
	
	fgets(x, 100, file);
	printf("%s", x);

    freopen("SrRodrigo.txt","r", file);
    fgets(x, 100, file);
	printf("%s\n", x);
	
    system("pause");
    return 0;
}