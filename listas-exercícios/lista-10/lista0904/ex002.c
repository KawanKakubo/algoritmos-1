#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um número, inferior à 1 ou superior à 6: ");
	scanf("%d", &num);
	if (num < 1 || num >= 6) {
		printf("\nValor digitado com sucesso.");
	}
	else {
		printf("\nValor não pode estar entre 1 e 6.");
	}
	printf("\nFIM!\n ");
	
	return 0;
}