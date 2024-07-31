#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int macas;
	float vcompra;
	
	printf("Digite a quantidade de maçãs que serão compradas: ");
	scanf("%i", &macas);
	
	if (macas < 12)
	{
		vcompra = 2.3 * macas;
		printf("Total deu: %.2f",vcompra);
	}
	else
	{
		vcompra = 2 * macas;
		printf("Total deu: %.2f",vcompra);
	}
	
	return 0;
}