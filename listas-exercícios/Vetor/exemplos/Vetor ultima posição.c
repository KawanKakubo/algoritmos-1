#include<stdio.h>
#define TAM 4
int main()
{
 float NOTAS[TAM];
 int I;
 printf("\n Carregando o vetor");
 for(I=0;I<TAM;I++)
 {
  printf("\nInforme um valor:");
  scanf("%f",&NOTAS[I]);	
 }
 
 printf("\n Apresentando o vetor");
 for(I=0;I<TAM;I++)
 {
  printf("%.2f ",NOTAS[I]);	
 }
 
 printf("\nNa terceira posição %.2f",NOTAS[2]);
 printf("\nNa ultima posição %.2f", NOTAS[TAM-1];
 
	
	
	return 0;
}

