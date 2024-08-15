#include <stdio.h>

int parOuImpar ();
int main () {
	int valor;
	printf("Digite um valor: ");
	scanf("%d", &valor);
	
	if (parOuImpar(valor) == 1) {
		printf("Par");
	} if (parOuImpar(valor) == 0) {
		printf("Impar");
	} if (parOuImpar(valor) == 2) {
		printf("Zero");
	}
	
	return 0;
}

int parOuImpar (n) {
	int opcao;
	
	if (n % 2 == 0) {
		opcao = 1;
	} if (n == 0) {
		opcao = 2;
	} if (n % 2 == 1) {
		opcao = 0;
	} 
	
	return opcao;
}