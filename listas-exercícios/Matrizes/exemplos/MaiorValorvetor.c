#include <stdio.h>
#define TAM 5
int main()
{
	int V[TAM], V2[TAM], V3[TAM];
	int I, MAIOR; // indice ou posição
	// LEITURA 
	
	for(I=0;I<TAM;I++)
	{
		printf("Informe um valor");
		scanf("%i",&V[I]);
		
	}
	
	//APRESENTAR É ORDEM CRESCENTE
	for(I=0;I<TAM;I++)
	{
		printf("%i ", V[I]);
	}
	
	printf("\n ");
	//APRESENTAR É ORDEM DECRESCENTE
	for(I=TAM-1;I>=0;I--)
	{
		printf("%i ", V[I]);
	}
	
	
	
	
	
	
	printf( "\nUltimo valor do vetor %ina ultima posição", 	V[TAM-1]);
	
	MAIOR=V[0]; // ATRIBUI O PRIMEIRO VALOR LIDO
    for(I=0;I<TAM;I++)
    	if(V[I]>MAIOR)
    		MAIOR=V[I];
	
	
	printf( "\nO maior valor do vetor %i", MAIOR);
	
	//APRESENTAR os elementos pares V[I]
	printf( "\nOs valores pares do vetor");
	for(I=0;I<TAM;I++)
	  if (V[I]%2==0)
			printf(" %i ", V[I]);
		
		
    //APRESENTAR os valares das posições pares 
	printf( "\nOs valores das posições pares do vetor");
	for(I=0;I<TAM;I++)
	  if (I%2==1)
			printf(" %i ", V[I]);
	
	
		
		
		
		
	return 0;
}