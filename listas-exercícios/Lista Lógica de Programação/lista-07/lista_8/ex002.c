#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float salario;
		
	printf("Digite seu sal�rio: ");
	scanf("%f", &salario);
	
	if (salario >= 18000) {
		printf("Voc� � classe A!");
	}
	else if (salario >= 9000) {
		printf("Voc� � classe B!");
	}
	else {
	   	printf("Voc� � classe C ou menor!");
	}
	
	return 0;
}