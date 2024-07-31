#include <stdio.h>

int main () {
	int i, valor, acumulador=0;
	
	for (i = 1; i <= 6; i++) {
		printf("Digite um valor: ");
		scanf("%d", &valor);
		
		if (valor % 2 == 0) {
			acumulador += valor;
		}
	}
	
	printf("A soma dos valores pares e: %d", acumulador);
	
	return 0;
}