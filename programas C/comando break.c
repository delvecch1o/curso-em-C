#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i;
	for (i = 1; i <= 20; i++){
		if (i % 3 == 0 && i % 9 == 0){
			printf("%d divisivel por 3 e 9\n", i);
			break; // ele vai quebrar a execução desse ciclo assim q ele encontrar o primeiro numero divisivel por 3 e 9.
	} else {
		printf(" %d nao eh\n",i);
		
	}
	
	}	
    getchar();
    return 0;
}
