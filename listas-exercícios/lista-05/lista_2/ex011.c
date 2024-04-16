#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float compra, taxa, icms, lucro, valor_reais, valor_final;
	
	printf("Digite o valor da compra em dollar: ");
	scanf("%f", &compra);
	printf("Digite o valor de 1 dollar em reais: ");
	scanf("%f", &taxa);
	printf("Digite o valor do percentual do ICMS: ");
	scanf("%f", &icms);
	printf("Digite o valor do percentual do lucro da empresa: ");
	scanf("%f", &lucro);
	
	valor_reais = compra * taxa;
	valor_final = (lucro / 100 * valor_reais) + (icms / 100 * valor_reais) + valor_reais;
	
	printf("O valor a ser pago em reais incluindo todas os impostos é: %.2f",valor_final);
	return 0;
}