#include <stdio.h>

void parOuImpar ();
int main () {
	int valor;
	printf("Digite um valor: ");
	scanf("%d", &valor);
	parOuImpar(valor);
	return 0;
}

void parOuImpar (n) {
	if (n % 2 == 0) {
		printf("Valor par");
	} else {
		printf("Valor impar");
	}
}