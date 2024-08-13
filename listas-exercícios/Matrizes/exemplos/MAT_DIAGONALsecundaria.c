#include <stdio.h>
#define TAM 3
int main()
{
	int MAT[TAM][TAM];
	int I, J,AUX;
	//carrega a matriz
	for (I=0;I<TAM;I++)//LINHAS
	{
		for( J=0;J<TAM;J++)//COLUNAS
		{
         
		  	printf("\n Informe um numero");
		    scanf("%i",&MAT[I][J]);
			
		}
	}
    //apresenta a matriz
	for (I=0;I<TAM;I++)//LINHAS
	{
		for( J=0;J<TAM;J++)//COLUNAS
		{
			
			  printf("%i ",MAT[I][J]);
		}
		printf("\n");
	
	}
	
	printf("\n Os elementos da diagonal secundaria");
	
	
	//apresenta a DIOGONAL SECUNDARIAL matriz
	for (I=0;I<TAM;I++)//LINHAS
	{
		for( J=0;J<TAM;J++)//COLUNAS
		{
			if (J==TAM-1-I)
			  printf("%i ",MAT[I][J]);
		}
	
	}
	
	return 0;
}