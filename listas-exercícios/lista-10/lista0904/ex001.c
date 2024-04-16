#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	if (num > 1 && num <= 6) {
		printf("\nValor digitado com sucesso.");
	}
	else {
		printf("\nValor fora do intervalo permitido.");
	}
	printf("\nFIM!\n ");
	
	return 0;
}