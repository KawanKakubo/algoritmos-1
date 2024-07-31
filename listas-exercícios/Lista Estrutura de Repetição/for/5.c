#include <stdio.h>

int main () {
	int num, i, contador=0;
	
	printf("Diga o numero: ");
	scanf("%d", &num);
	
	for (i = 1; i <= num; i++) {
		if (num % i == 0) {
			contador += 1;
		}
	}
	
	if (contador == 2) {
		printf("O numero %d e primo!", num);
	} else {
		printf("O numero %d nao e primo!", num);
	}
	
	return 0;
}