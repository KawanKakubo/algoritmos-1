#include <stdio.h>
#define TAM 3
int main()
{
	int M[TAM][TAM];
    int I, J, SOMA=0,SOMAL=0,SOMAL1=0, L=0;// I  linha e J coluna
    printf( "\n Preenchendo a matriz");
	
	for(I=0; I<TAM;I++)//Linha
    	for ( J=0;J<TAM;J++)//coluna
		{
			printf("\nInforme um valor");
			scanf("%i", &M[I][J]);
			
		}
    
    
  /*M[0][0]=13;
    M[0][1]=1;
    M[0][2]=10;
    
    M[1][0]=23;
    M[1][1]=2;
    M[1][2]=11;
    
    
    M[2][0]=1;
    M[2][1]=1;
    M[2][2]=1;*/
    
    
	printf( "\n apresentando a matriz na ordem crescente\n");
	
	for(I=0; I<TAM;I++)//Linha
    {
	  for (J=0;J<TAM;J++)//
		{
	     printf( "%i ",M[I][J] );
		}
		printf( "\n");
	}
	
	printf( "\n apresentando a matriz na ordem decrescente\n");
	
	for(I=TAM-1; I>=0;I--) 
    {
	  for (J=TAM-1;J>=0;J--) 
		{
	     printf("%i ",M[I][J] );
		}
		printf( "\n");
	}
	
        printf( "\n apresentando a DIAGONAL PRINCIPAL matriz\n");
	for(I=0; I<TAM;I++)//Linha
      for (J=0;J<TAM;J++)//
		  if (I==J)	
  	          printf( "%i ",M[I][J] );
	
		
    printf( "\n apresentando a DIAGONAL secundaria matriz\n");
	for(I=0; I<TAM;I++)//Linha
      for (J=0;J<TAM;J++)//
		  if (J==(TAM-1)-I)	
  	          printf( "%i ",M[I][J] );
			
			
    for(I=0; I<TAM;I++)//Linha
    	for ( J=0;J<TAM;J++)//coluna
		{
			SOMA=SOMA+M[I][J];
			
		}
    		
	printf( "\n A soma dos elementos da matriz %i ",SOMA );		
			
	
	printf( "\n\n Informe a linha que deseja somar\n ");
	scanf("%i", &L);
	for(I=0; I<TAM;I++)//Linha
    	for ( J=0;J<TAM;J++)//coluna
			if (L-1==I)
			   SOMAL=SOMAL+M[I][J];
	
	
	printf( "A soma dos elementos da linha %i ",SOMAL);
				
	
	printf( "\n\n Informe a linha que deseja somar\n ");
	scanf("%i", &L);
	for ( J=0;J<TAM;J++)//coluna
		 SOMAL1=SOMAL1+M[L-1][J];
	
	
	printf( "A soma dos elementos da linha %i ",SOMAL1);
	
	
	
	
	
	
	
	
	
	return 0;
}