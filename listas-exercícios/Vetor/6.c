#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10

int main () {
	srand(time(NULL));
	int vect[tam], i, menores=0;
	
	for (i=0; i<tam; i++) {
		vect[i] = rand()% 21;
		
		if (vect[i] < 10) {
			menores++;
		}
	}
	
	for (i=0; i<tam; i++) {
		printf("%d ", vect[i]);
	}
	
	printf("\nExistem %d numeros menores que 10.", menores);
	
	return 0;
}