#include <stdio.h>
#define TAM 5
int main(int argc, char** argv)
{
	float P1[TAM],P2[TAM],MEDIA[TAM];
	int I;
	printf("Carregando a P1");
	for(I=0;I<TAM;I++)
	{
	  scanf("%f,",&P1[I]);	
	}
	printf("Carregando a P2");
	for(I=0;I<TAM;I++)
	{
	  scanf("%f,",&P2[I]);	
	}
	printf("Carregando o vetor Media");
	for(I=0;I<TAM;I++)
	{
	  MEDIA[I]=(P1[I]+P2[I])/2;	
	}
	
	printf("\n Apresentando...");
    for(I=0;I<TAM;I++)
	{
	    printf("%.2f,",MEDIA[I]);	
	}
	
	
	

	
	return 0;
}
