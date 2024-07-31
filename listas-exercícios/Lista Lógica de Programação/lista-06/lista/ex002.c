#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float salario;
	
	printf("Digite seu salário: ");
	scanf("%f", &salario);
	
	if (salario < 1412) {
		printf("Você abaixo do salário mínimo!");
	}
	
	else {
		printf("Você ganha pelo menos um salário mínimo!");
	}
	
	return 0;
}
