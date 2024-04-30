#include <stdio.h>

int main() {
	int cont = 2, num, maior, menor;
	
	printf("Digite um valor: ");
	scanf("%i", &num);
	maior = menor = num;
	
	while (cont <= 10) {
		printf("Digite um %i valor: ", cont);
		scanf("%i", &num);
		cont += 1;
		if (num > maior) {
			maior = num;
		}
		if (num < menor) {
			menor = num;
		}
	}
	
	printf("O maior valor lido foi %i e o menor foi %i.", maior, menor);
	
	return 0;
}