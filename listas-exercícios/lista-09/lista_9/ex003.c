#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () 
{
	setlocale(LC_ALL, "Portuguese");
	int esc, alt, base, raio;
	float tri, ret, cir;
	
	printf("ESCOLHAS ENTRE AS OP��ES:\n[1] Calcular a �rea de um ret�ngulo\n[2] Calcular a �rea de um c�rculo\n[3] Calcular a �rea de um tri�ngulo\n");
	scanf("%d", &esc);
	
	switch(esc)
	{
	case 1:
		printf("Diga o valor da altura do ret�ngulo: ");
		scanf("%d", &alt);
		printf("Diga o valor da base do ret�ngulo: ");
		scanf("%d", &base);
		ret = alt * base;
		printf("O valor da �rea �: %.2f",ret);
		break;
	case 2:
		printf("Diga o valor do raio do c�rculo: ");
		scanf("%d", &raio);
		cir = M_PI * pow(raio,2);
		printf("O valor da �rea �: %.2f",cir);
		break;
	case 3:
		printf("Diga o valor da altura do tri�ngulo: ");
		scanf("%d", &alt);
		printf("Diga o valor da base do tri�ngulo: ");
		scanf("%d", &base);
		tri = base * alt / 2;
		printf("O valor da �rea �: %.2f",tri);
		break;
	default:
		printf("Op��o inv�lida!");
	}
	
	return 0;
}