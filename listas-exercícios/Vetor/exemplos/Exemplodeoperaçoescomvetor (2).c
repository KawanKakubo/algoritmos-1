#include <stdio.h>
#define TAM 5
int main()
{
	int V[TAM],V2[TAM],V3[TAM];
	int MENOR;
	int I,X, P, SOMA=0;
	
	printf("\n\n Carregando o primeiro vetor...\n\n");
	for(I=0;I<TAM;I++)
	{
	  do
	  {
	   printf("Informe um valor");
	   scanf("%i",&X); 
	  }while (X<=6);
	  V[I]=X;
	    
	}
	
	printf("\n\n Carregando o segundo vetor...\n\n");
	for(I=0;I<TAM;I++)
	{
		printf("Informe um valor");
		scanf("%i",&V2[I]);
	}
	
	printf("\n\n Carregando o terceiro vetor...\n\n");
	for(I=0;I<TAM;I++)
	{
		V3[I]=(V[I]+V2[I]);
	}
	
			
	printf("\n\nVetor1\n\n");
	for(I=0;I<TAM;I++)
	{
		printf("%i ", V[I]);
	}
		
	printf("\n\nVetor2\n\n");
	for(I=0;I<TAM;I++)
	{
		printf("%i ", V2[I]);
	}
		
	printf("\n\nVetor3\n\n");
	for(I=0;I<TAM;I++)
	{
		printf("%i ", V3[I]);
	}
	
	
	//Quantidade de elementos pares do Vetor 1 possui\n\n");
	for(I=0;I<TAM;I++)
	{
		if (V[I]%2==0)
		{
		   SOMA=SOMA+1;	
		}
	}
	printf("\n\nQuantidade de elementos pares de V1: %i \n\n", SOMA);
	
	
	
	printf("\n\nElemento na posição par do Vetor1\n\n");
	for(I=0;I<TAM;I++)
	{
		if (I%2==1)
		   printf("%i ", V[I]);
	}
	
	//Menor valor do vetor 1  
	for(I=0;I<TAM;I++)
	{
     if (I==0) //inicializei a variavel menor
	 {
	 	MENOR=V[I];
	 	P=I;
	 }
	 else
	 	if (V[I]<MENOR)
		 {
		 	MENOR=V[I];
		 	P=I;
		 }
	}
	printf("\n\nO menor valor %i na posição %i ", MENOR,P+1);
		 	
	
	printf("\n\nPrimeiro Vetor Original\n\n");
	for(I=0;I<TAM;I++)
	{
		printf("%i ", V[I]);
	}
	printf("\nPrimeiro Vetor na inversa\n");
	for(I=TAM-1;I>=0;I--)
	{
		printf("%i ", V[I]);
	}
		
		
	return 0;
}
		