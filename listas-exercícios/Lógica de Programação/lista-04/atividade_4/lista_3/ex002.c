#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float r, area;
	printf("Digite o valor do raio: ");
	scanf("%f", &r);
	area = M_PI * pow(r,2);
	printf("O valor da área vale: %.2f.",area);
	return 0;
}