#include <stdio.h>

int main () {
	float nota;
	do {
		printf("Informe sua nota: ");
		scanf("%f", &nota);
	} while(nota > 10 || nota < 0);
	
	return 0;
}