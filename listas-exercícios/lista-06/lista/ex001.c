#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float salario;
	
	printf("Digite seu sal�rio: ");
	scanf("%f", &salario);
	
	if (salario > 10000) {
		printf("Voc� ganha bem!");
	}
	
	else {
		printf("Que legal!");
	}
	
	return 0;
}