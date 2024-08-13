#include <stdio.h>
#define TAM 10
int main()
{
	int MAT[TAM][TAM];
	int I, J;
	//carrega a matriz identidade
	for (I=0;I<TAM;I++)//LINHAS
	
		for( J=0;J<TAM;J++)//COLUNAS
		       
		  	if (I==J)
		  		MAT[I][J]=1;
		  	else
			    MAT[I][J]=0;
			
		
    //apresenta a matriz
	for (I=0;I<TAM;I++)//LINHAS
	{
		for( J=0;J<TAM;J++)//COLUNAS
		{
			
			  printf("%i ",MAT[I][J]);
		}
		printf("\n");
	
	}
	
	return 0;
}