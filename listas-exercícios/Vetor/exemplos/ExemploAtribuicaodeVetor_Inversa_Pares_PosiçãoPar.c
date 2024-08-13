#include <stdio.h>
#define TAM 5
int main(int argc, char** argv)
{
	int NUM[TAM]={1, 2, 3, 4, 5};
	int I;
	printf("Vetor na inversa[");
	for(I=TAM-1;I>=0;I--)
	{
	 printf("%d,",NUM[I]);	
	}
	
	printf("]");
    printf("\n Valores/Elementos pares...");
    for(I=0;I<TAM;I++)
	{
	  if(NUM[I]%2==0)	
	    printf("%d,",NUM[I]);	
	}
	
	printf("\n Posições pares...");
    for(I=0;I<TAM;I++)
	{
	  if(I%2==1)	
	    printf("%d,",NUM[I]);	
	}
	

	
	return 0;
}
