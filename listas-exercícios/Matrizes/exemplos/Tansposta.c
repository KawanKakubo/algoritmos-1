#include <stdio.h>
#define TAML 3
#define TAMC 2
int main()
{
	int M[TAML][TAMC];
    int I, J;// I  linha e J coluna
    printf( "\n Preenchendo a matriz");
	
	for(I=0; I<TAML;I++)//Linha
    	for ( J=0;J<TAMC;J++)//coluna
		{
			printf("\nInforme um valor");
			scanf("%i", &M[I][J]);
			
		}
    
 	printf( "\n apresentando a matriz\n");
	
	for(I=0; I<TAML;I++) 
    {
	  for (J=0;J<TAMC;J++) 
		{
	     printf( "%i ",M[I][J] );
		}
		printf( "\n");
	}
	
	
	printf( "\n apresentando a matriz transposta\n");
	
	for(I=0; I<TAMC;I++) 
    {
	  for (J=0;J<TAML;J++) 
		{
	     printf( "%i ",M[J][I] );
		}
		printf( "\n");
	}
	
	
   return 0;	

}