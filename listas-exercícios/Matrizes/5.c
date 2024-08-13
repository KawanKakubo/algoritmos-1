#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main () {
	srand(time(NULL));
	setlocale(LC_ALL, "Portuguese");
	int mat1[3][3], mat2[3][3], mult[3][3];
	int i, j;
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			mat1[i][j] = rand() % 11;
			mat2[i][j] = rand() % 11;
			mult[i][j] = mat1[i][j] * mat2[i][j];
		}
	}
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			printf("%d ", mat1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			printf("%d ", mat2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			printf("%d ", mult[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}