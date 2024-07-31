#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int n, i;   
	float acumulador=0, termo;
	
	printf("Digite um número qualquer inteiro positivo > 10: ");
	scanf("%d", &n);
	
	while (n < 10) {
		printf("Valor digitado deve ser > 10. Tente novamente.\n");
		printf("Digite um número qualquer inteiro positivo > 10: ");
		scanf("%d", &n);
	}
	
	for (i=1; i<=10; i++) {
		termo = (float)i / (n - (i - 1));
		acumulador += termo;
	}
	
	printf("O valor da série é: %.2f", acumulador);
	
	return 0;
}