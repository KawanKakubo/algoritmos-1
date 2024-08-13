#include <stdio.h>
#define TAM 5
int main()
{
	int V[TAM];
	int I; // indice ou posição
	// CARREGAR OU PREENCHER
	for(I=0;I<TAM;I++)
	{
		V[I]=1;
	}
	
	//APRESENTAR
	for(I=0;I<TAM;I++)
	{
		printf("%i ", V[I]);
	}
	
	
	return 0;
}