#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	srand(time(NULL));
	int matriz[3][2];
	int i, j;
	
	for (i=0; i<3; i++) {
		for (j=0; j<2; j++) {
			matriz[i][j] = rand() % 10;
		}
	}
	
	for (i=0; i<3; i++) {
		for (j=0; j<2; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for (j=0; j<2; j++) {
		for (i=0; i<3; i++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}