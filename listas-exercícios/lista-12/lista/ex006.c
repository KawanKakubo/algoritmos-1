#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float x, y, aux;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &x);
	printf("Digite o segundo valor: ");
	scanf("%f", &y);
	
	if (x > y)
	{
		aux = y;
		y = x;
		x = aux;
	}
	else
	{
		x = x;
		y = y;
	}
	
	printf("Valor de X: %.2f\nValor de Y: %.2f",x, y);
	
	return 0;
}