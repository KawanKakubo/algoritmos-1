#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	srand(time(NULL));	
	int matriz[2][3];
	int i, j, linha1=0, linha2=0;
	
	for (i=0; i<2; i++) {
		for (j=0; j<3; j++) {
			matriz[i][j] = rand() % 10;
		}
	}
	
	for (j=0; j<3; j++) {
		linha1 += matriz[0][j];
		linha2 += matriz[1][j];
	}

	for (i=0; i<2; i++) {
		for (j=0; j<3; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Linha 1: %d\nLinha 2: %d", linha1, linha2);
	
	return 0;
}