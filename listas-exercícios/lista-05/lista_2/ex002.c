#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float l1, l2, h, m, n;
	
	printf("Forneça um valor inteiro para M: ");
	scanf("%f", &m);
	printf("Forneça outro valor inteiro menor que M para N: ");
	scanf("%f", &n);
	
	l1 = pow(m,2) - pow(n,2);
	l2 = 2 * m * n;
	h = pow(m,2) + pow(n,2);
	
	printf("\nOs lados do triângulo gerado foi: ");
	printf ("\nL1 = %.2f, L2 = %.2f, H = %.2f",l1, l2, h);
	
	return 0;
}