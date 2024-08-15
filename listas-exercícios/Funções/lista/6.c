#include <stdio.h>

void soma ();
void subtracao ();
void divisao ();
void multiplicacao ();

int main () {
	int opcao;
	do {
		printf("Opcoes:\n1 - Soma\n2 - Subtracao\n3 - Divisao\n4 - Multiplicacao\n5 - Sair\nSua escolha: ");
	   	scanf("%d", &opcao);			
	} while (opcao != 5);
	
	if (opcao == 1) {
		soma();
	} if (opcao == 2) {
		subtracao();
	} if (opcao == 3) {
		divisao();
	} if (opcao == 4) {
		multiplicacao();
	}
	
	return 0;
}

void soma () {
	int n1, n2;
	printf("Valor 1: ");
	scanf("%d", &n1);
	printf("Valor 2: ");
	scanf("%d", &n2);
	printf("%d + %d = %d", n1, n2, n1+n2);
}

void subtracao () {
	int n1, n2;
	printf("Valor 1: ");
	scanf("%d", &n1);
	printf("Valor 2: ");
	scanf("%d", &n2);
	printf("%d - %d = %d", n1, n2, n1-n2);
}

void divisao () {
	float n1, n2;
	printf("Valor 1: ");
	scanf("%f", &n1);
	printf("Valor 2: ");
	scanf("%f", &n2);
	printf("%.2f / %.2f = %.2f", n1, n2, n1/n2);
}

void multiplicacao () {
	int n1, n2;
	printf("Valor 1: ");
	scanf("%d", &n1);
	printf("Valor 2: ");
	scanf("%d", &n2);
	printf("%d * %d = %d", n1, n2, n1*n2);
}