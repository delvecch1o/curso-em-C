#include <stdio.h>
#include <stdlib.h>

int main (void) {
	void teste (void);
	teste ();
	teste ();
	teste ();
	return 0;
}

void teste (void) {
	
	int variavel = 2;
	variavel *= 2;
	printf ("%d\n",variavel);
}
