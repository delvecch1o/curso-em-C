#include <stdio.h>
#include <stdlib.h>

  _Bool stringIguais (char s1 [], char s2[]){
	  
	  int i = 0;
	  
	  while (s1[i] == s2 [i] && s1[i] != '\0' && s2 [i] != '\0'){
		  i++;
	  }
	  
	  if (s1 [i] == '\0' && s2 [i] == '\0'){
		  return 1;
	  } else {
		  return 0;
	  }
	  
  }

int main(){
    _Bool stringIguais (char s1 [], char s2[]);
    
    if (stringIguais("casa", "casa")){
		printf("sao iguais\n");
	}  else {
		printf("nao sao iguais\n");
	}
	    
    system("pause");
    return 0;
}