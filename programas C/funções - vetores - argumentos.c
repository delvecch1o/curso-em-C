#include <stdio.h>
#include <stdlib.h>

int main(void){
   
    int vetor [10] = {6,4,1,9,8,0,5,7,3,2};
    int i;
    void ordemCrescente (int vetor [], int n); // n�o eh necessario declarar a qauntidade de vetores [10]
    
    ordemCrescente(vetor, 10);
    
	for (i = 0; i < 10; i++ ){
    printf("%d\n", vetor[i]);
	}
	
    system("pause");
    return 0;
}

void ordemCrescente (int vetor [], int n){
	
	int i, j, temporaria;
	
	for (i = 0; i < n; i++){
		for (j = i + 1; j < n; j++) {
			if (vetor[i] > vetor [j]) {
				temporaria = vetor [i];
				vetor [i] = vetor [j];
				vetor [j] = temporaria;
			}
			
		}
	}	
}