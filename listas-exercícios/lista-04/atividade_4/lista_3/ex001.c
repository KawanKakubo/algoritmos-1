#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, m;
	printf("Digite o valor da primeira nota: ");
	scanf("%f", &n1);
	printf("Digite o valor da segunda nota: ");
	scanf("%f", &n2);
	printf("Digite o valor da terceira nota: ");
	scanf("%f", &n3);
	printf("Digite o valor da quarta nota: ");
	scanf("%f", &n4);
	m = ( n1 + n2 + n3 + n4 ) / 4;
	printf("Sua média aritmética foi de: %.2f", m);
	return 0;
}