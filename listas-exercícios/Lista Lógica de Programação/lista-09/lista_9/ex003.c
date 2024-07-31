#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () 
{
	setlocale(LC_ALL, "Portuguese");
	int esc, alt, base, raio;
	float tri, ret, cir;
	
	printf("ESCOLHAS ENTRE AS OPÇÕES:\n[1] Calcular a área de um retângulo\n[2] Calcular a área de um círculo\n[3] Calcular a área de um triângulo\n");
	scanf("%d", &esc);
	
	switch(esc)
	{
	case 1:
		printf("Diga o valor da altura do retângulo: ");
		scanf("%d", &alt);
		printf("Diga o valor da base do retângulo: ");
		scanf("%d", &base);
		ret = alt * base;
		printf("O valor da área é: %.2f",ret);
		break;
	case 2:
		printf("Diga o valor do raio do círculo: ");
		scanf("%d", &raio);
		cir = M_PI * pow(raio,2);
		printf("O valor da área é: %.2f",cir);
		break;
	case 3:
		printf("Diga o valor da altura do triângulo: ");
		scanf("%d", &alt);
		printf("Diga o valor da base do triângulo: ");
		scanf("%d", &base);
		tri = base * alt / 2;
		printf("O valor da área é: %.2f",tri);
		break;
	default:
		printf("Opção inválida!");
	}
	
	return 0;
}