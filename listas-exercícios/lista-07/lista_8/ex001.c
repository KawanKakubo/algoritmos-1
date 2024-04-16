#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int num;
		
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	
	if (num > 0) {
		printf("Valor positivo!");
	}
	else if (num == 0) {
		printf("Valor neutro!");
	}
	else {
	   	printf("Valor negativo!");
	}
	
	return 0;
}