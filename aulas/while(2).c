#include <stdio.h>

int main() {
	int cont = 2, num, maior, menor, posma, posme;
	
	printf("Digite um valor: ");
	scanf("%i", &num);
	maior = menor = num;
	posma = posme = 1;
	
	while (cont <= 10) {
		printf("Digite um %i valor: ", cont);
		scanf("%i", &num);
		if (num > maior) {
			maior = num;
			posma = cont;
		}
		if (num < menor) {
			menor = num;
			posme = cont;
		}
		cont += 1;
	}
	
	printf("-=-=-=-=-=-=-=-=-=-\n");
	printf("O maior valor lido foi %i na posicao %i.\nO menor foi %i na posicao %i.", maior, posma, menor, posme);
	
	return 0;
}