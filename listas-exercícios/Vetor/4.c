#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 5

int main () {
	srand(time(NULL));
	int i, v1[tam], v2[tam], v3[tam];
	
	for (i=0; i<tam; i++) {
		v1[i] = rand()% 11;
		v2[i] = rand()% 11;
	}
	
	for (i=0; i<tam; i++) {
		printf("%d ", v1[i]);
	}
	
	printf("\n");
	
	for (i=0; i<tam; i++) {
		printf("%d ", v2[i]);
	}
	
	for (i=0; i<tam; i++) {
		v3[i] = (v1[i] + v2[i]);
	}
	
	printf("\n");
	
	for (i=0; i<tam; i++) {
		printf("%d ", v3[i]);
	}
	
	return 0;
}