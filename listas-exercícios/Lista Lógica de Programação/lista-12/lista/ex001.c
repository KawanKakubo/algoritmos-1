#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int idade, escolhacarromoto, escolhasucoourefri;
	
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	if (idade >= 18)
	{
		printf("Digite 1 para carro ou 2 para moto: ");
		scanf("%i", &escolhacarromoto);
		
		if (escolhacarromoto == 1)
		{
			printf("\nmuito bom! Viajar requer espa�o para mala!");
		}
		else if (escolhacarromoto == 2)
		{
			printf("\nUm Lobo Solit�rio n�o precisa de mala para atravessar o pa�s");
		}
		else
		{
			printf("\nOp��o inv�lida.");
		}
	}
	else
	{
		printf("Digite 1 para suco ou 2 para refrigerante: ");
		scanf("%i", &escolhasucoourefri);
		
		if (escolhasucoourefri == 1)
		{
			printf("\nmuito bom! Suco � saud�vel!");
		}
		else if (escolhacarromoto == 2)
		{
			printf("\nrefrigerante � refrescante e combina com pipoca!");
		}
		else
		{
			printf("\nOp��o inv�lida.");
		}
	}
	
	printf("\nAt� breve!");
	
	
	return 0;
}