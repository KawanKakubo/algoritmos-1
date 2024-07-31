#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float r, h, a, v;
	
	printf("Digite o valor do raio do cilindro: ");
	scanf("%f", &r);
	printf("Digite o valor da altura do cilindro: ");
	scanf("%f", &h);

	a = 2 * M_PI * r * (h + r);
	v = M_PI * pow(r,2) * h;
	
	printf("Área = %.2f e Volume = %.2f",a, v);
	return 0;
}