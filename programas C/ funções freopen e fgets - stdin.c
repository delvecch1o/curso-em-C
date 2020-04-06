#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char x[100];
	
	fgets(x, 100, stdin);
	printf("%s",x);
	
	freopen("freopen.txt", "r", stdin);
	fgets(x, 100, stdin);
	printf("%s\n", x);
	
    system("pause");
    return 0;
}