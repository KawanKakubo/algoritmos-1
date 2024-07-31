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
			printf("\nmuito bom! Viajar requer espaço para mala!");
		}
		else if (escolhacarromoto == 2)
		{
			printf("\nUm Lobo Solitário não precisa de mala para atravessar o país");
		}
		else
		{
			printf("\nOpção inválida.");
		}
	}
	else
	{
		printf("Digite 1 para suco ou 2 para refrigerante: ");
		scanf("%i", &escolhasucoourefri);
		
		if (escolhasucoourefri == 1)
		{
			printf("\nmuito bom! Suco é saudável!");
		}
		else if (escolhacarromoto == 2)
		{
			printf("\nrefrigerante é refrescante e combina com pipoca!");
		}
		else
		{
			printf("\nOpção inválida.");
		}
	}
	
	printf("\nAté breve!");
	
	
	return 0;
}