#include <stdio.h>
#define tam 8

int main () {
	int numeros[tam], i;
	
	for (i=0; i<tam; i++) {
		printf("Digite um numero inteiro: ");
		scanf("%d", &numeros[i]);
		printf("A posicao no vetor: %d\n", i);
	}
	
	printf("(");
	for (i=0; i<tam; i++) {
		if (i==tam-1) {
			printf("%d", numeros[i]);
		} else {
			printf("%d, ", numeros[i]);
		}
	}
	printf(")");
	
	return 0;
}