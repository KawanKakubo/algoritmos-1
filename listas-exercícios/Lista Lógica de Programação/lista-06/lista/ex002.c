#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float salario;
	
	printf("Digite seu sal�rio: ");
	scanf("%f", &salario);
	
	if (salario < 1412) {
		printf("Voc� abaixo do sal�rio m�nimo!");
	}
	
	else {
		printf("Voc� ganha pelo menos um sal�rio m�nimo!");
	}
	
	return 0;
}
