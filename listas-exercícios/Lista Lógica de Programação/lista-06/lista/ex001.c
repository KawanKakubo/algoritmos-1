#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float salario;
	
	printf("Digite seu salário: ");
	scanf("%f", &salario);
	
	if (salario > 10000) {
		printf("Você ganha bem!");
	}
	
	else {
		printf("Que legal!");
	}
	
	return 0;
}