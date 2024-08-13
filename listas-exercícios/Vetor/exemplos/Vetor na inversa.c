#include <stdio.h>

#define TAM 4

int main()
{
    int N[TAM];
    int I;
    //carregamento do vetor pelo usuario
    for(I=0;I<TAM;I++)
	{
		printf("Informe uma nota");
		scanf("%d", &N[I]);
	    
	}
    //apresentar o vetorna inversa
    for(I=TAM-1;I>=0;I--)
	{
		printf("%d ",N[I]);
	}
    return 0;
}