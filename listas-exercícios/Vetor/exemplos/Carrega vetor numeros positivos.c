#include<stdio.h>

#define TAM 5

int main()
{
	
	int N[TAM];
	int I,X;

	for(I=0;I<TAM;I++)
	{
	 do
	 {
	  printf("Informe um numero");
	  scanf("%i", &X);
	 }while(X<0)); 
	  N[I]=X;// so é armazenado se o valor for positivo	
	}
	
	printf("\n Apresentando o vetor\n");
	for(I=0;I<TAM;I++)
	{
	  printf("%i ", N[I]);	
	
	}
	
	return 0;
}