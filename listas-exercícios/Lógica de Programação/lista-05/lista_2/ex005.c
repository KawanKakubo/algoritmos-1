#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float a11, a12, a21, a22, d;
	
	printf("Digite o valor do elemento a11: ");
	scanf("%f", &a11);
	printf("Digite o valor do elemento a12: ");
	scanf("%f", &a12);
	printf("Digite o valor do elemento a21: ");
	scanf("%f", &a21);
	printf("Digite o valor do elemento a22: ");
	scanf("%f", &a22);
	
	d = (a11 * a22) - (a21 * a12);

	printf("O valor do determinante dessa matriz é: %.2f",d);
	return 0;
}