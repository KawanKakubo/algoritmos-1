#include <stdio.h>
#define TAM 5
int main(int argc, char** argv)
{
	int NUM[TAM];
	int I,X;
	printf("Carregando o Vetor[");
	for(I=0;I<TAM;I++)
	{
		do{
	       scanf("%d,",&X);
		}while(X%2==0|| X>0);
		NUM[I]=X;	
	}
		
    printf("\n Apresentando...");
    for(I=0;I<TAM;I++)
	{
	    printf("%d,",NUM[I]);	
	}
	
	
	

	
	return 0;
}
