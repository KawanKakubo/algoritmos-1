#include <stdio.h>
#define TAM 4
int main()
{
  float NOTAS[TAM];
  int I;
  //CARREGANDO O VETOR
  for (I=0;I<TAM;I++)
  {
  	do
  	{
	  	
  	printf("\n Informe a nota da posição %d",I+1);
  	scanf("%f",&NOTAS[I]);
	}while(NOTAS[I]>100 || NOTAS[I]<0);
  }
  //APRESENTANDO O VETOR COMPLETO
  for (I=0;I<TAM;I++)
  {
  printf("%.2f ",NOTAS[I]);
  }	
   //APRESENTANDO AS POSIÇÕES PARES
  for (I=0;I<TAM;I++)
  {
  	if (I%2==1)
      printf("\n%.2f ",NOTAS[I]);
  }	
  
   //APRESENTANDO AS POSIÇÕES IMPARES
  for (I=0;I<TAM;I++)
  {
  	if (I%2==0)
      printf("\n%.2f ",NOTAS[I]);
  }	
  
  //APRESENTANDO ULTIMA POSICAO
  printf("\n%.2f ",NOTAS[TAM-1]);
  //APRESENTANDO PRIMEIRA POSICAO
  printf("\n%.2f ",NOTAS[0]);
  
  	
  
  return 0;
  
}
