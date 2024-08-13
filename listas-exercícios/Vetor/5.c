#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 20

int main () {
	srand(time(NULL));
	int vect[tam], i, maior, posicao;
	
	for (i=0; i<tam; i++) {
		vect[i] = rand()% 50;
		
		if (i == 0) {
			maior = vect[i];
			posicao = i;
		} if (vect[i] > maior) {
			maior = vect[i];
			posicao = i;
		}
	}
	
	for (i=0; i<tam; i++) {
		printf("%d ", vect[i]);
	}
	
	printf("\nO maior valor: %d", maior);
	
	return 0;
}