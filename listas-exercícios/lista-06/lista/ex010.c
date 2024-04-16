#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if (num % 2 == 0) {
		printf("O número %d é par!",num);
	}
	
	else {
		printf("O número %d é ímpar!",num);
	}
	
	return 0;
}