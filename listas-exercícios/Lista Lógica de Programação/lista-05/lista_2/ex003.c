#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, delta;
	
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	printf("Digite o valor de c: ");
	scanf("%f", &c);

	delta = pow(b,2) - ( 4 * a * c );
	
	printf("O valor do delta é: %.2f",delta);
		
	return 0;
}