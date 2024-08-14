#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float salario;
		
	printf("Digite seu salário: ");
	scanf("%f", &salario);
	
	if (salario >= 18000) {
		printf("Você é classe A!");
	}
	else if (salario >= 9000) {
		printf("Você é classe B!");
	}
	else {
	   	printf("Você é classe C ou menor!");
	}
	
	return 0;
}