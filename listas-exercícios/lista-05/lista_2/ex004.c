#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float area, l1, l2, l3, t;
	
	printf("Digite o valor do lado 1: ");
	scanf("%f", &l1);
	printf("Digite o valor do lado 2: ");
	scanf("%f", &l2);
	printf("Digite o valor do lado 3: ");
	scanf("%f", &l3);
	
	t = ( l1 + l2 + l3 ) / 2;
	area = sqrt( t * (t - l1) * (t - l2) * (t - l3) );
	
	printf("A área do triângulo é: %.2f",area);
	return 0;
}