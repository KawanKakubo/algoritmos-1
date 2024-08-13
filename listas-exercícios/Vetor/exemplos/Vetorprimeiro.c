#include <stdio.h>

#define TAM 4

int main()
{
    float NOTAS[TAM];
    int I;
    //carregamento do vetor pelo usuario
    for(I=0;I<TAM;I++)
	{
		printf("Informe uma nota");
		scanf("%f", &NOTAS[I]);
	    
	}
    //apresentar o vetor
    for(I=0;I<TAM;I++)
	{
		printf("%.1f ",NOTAS[I]);
	}
    return 0;
}