#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 3

int main () {
	srand(time(NULL));
	int matriz[tam][tam];
	int i, j;
	
	for (i=0; i<tam; i++) {
		for (j=0; j<tam; j++) {
			matriz[i][j] = rand() % 10;
		}
	}
	
	for (i=0; i<tam; i++) {
		for (j=0; j<tam; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}