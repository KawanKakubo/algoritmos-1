#include <stdio.h>
#include <locale.h>

int main () 
{
	setlocale(LC_ALL, "Portuguese");
	int escolhamenu, escolhatemp, escolhadist;
	float tempc, tempf, tempk, distkm, distmilha;
	
	printf("[1] Conversor de Temperatura;\n[2] Conversor de Dist�ncia.\n");
	scanf("%i", &escolhamenu);
	
	if (escolhamenu == 1) 
	{
		printf("1-Converter Celsius para Farenheit;\n2-Converter Farenheit para Celsius;\n3-Converter Celsius para Kelvin.\n");
		scanf("%i", &escolhatemp);
		if (escolhatemp == 1)
		{
			printf("Digite a temperatura em Celsius: ");
			scanf("%f", &tempc);
			tempf = (9*tempc/5) + 32;
			printf("A temperatura em Farenheit � de: %.2f",tempf);
		}
		else if (escolhatemp == 2)
		{
			printf("Digite a temperatura em Farenheit: ");
			scanf("%f", &tempf);
			tempc = 5*(tempf-32)/9;
			printf("A temperatura em Celsius � de: %.2f",tempc);	
		}
		else if (escolhatemp == 3)
		{
			printf("Digite a temperatura em Celsius: ");
			scanf("%f", &tempc);
			tempk = tempc + 273;
			printf("A temperatura em Kelvin � de: %.2f",tempk);
		}
		else 
		{
			printf("Op��o inv�lida.");
		}
	}	
	
	else if (escolhamenu == 2)
	{
		printf("\n1-Converter km para milhas;\n2-Converter milhas para km.\n");
		scanf("%i", &escolhadist);
		
		if (escolhadist == 1)
		{
			printf("Digite a dist�ncia em km: ");
			scanf("%f", &distkm);
			distmilha = distkm * 0.62137;
			printf("A dist�ncia em milhas �: %.2f",distmilha);
		}
		else if (escolhadist == 2)
		{
			printf("Digite a dist�ncia em milhas: ");
			scanf("%f", &distmilha);
			distkm = distmilha / 0.62137;
			printf("A dist�ncia em km �: %.2f",distkm);
		}
		else
		{
			printf("Op��o inv�lida.");
		}
	}
	
	return 0;
}