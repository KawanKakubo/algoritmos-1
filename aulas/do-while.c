#include <stdio.h>

int main () 
{
	int resp, cont, acumulador;
	float media;
	
	cont = acumulador = resp = 0;
	
	do 
	{
		int idade;
		printf("Digite a idade da primeira pessoa: ");
		scanf("%i", &idade);
		printf("Deseja continuar, 0 para continuar: ");
		scanf("%i", &resp);
		cont += 1;
		acumulador += idade;	
	}
	
	while (resp == 0);
	
	media = acumulador / cont;
	
	printf("A media das idades informadas: %.2f", media);	
	
	return 0;
}