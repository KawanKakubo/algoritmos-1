#include<stdio.h>
#define TAM 6
int main()
{
   int A[TAM];
   int I, X, A1;
   
   for(I=0;I<TAM;I++)
   {
   	printf("\n Informe um numero");
   	scanf("%d",&A[I]);
   }
   
   printf("\nNumero pesquisa?");
   scanf("%d",&X);
   
   for(I=0;I<TAM;I++)
   {
     if (X==A[I])
     {
	 	printf("\n Na posição fisica %d", I+1);
	 	A1=1;//
	 }
   }
   if(A1!=1)
     printf("\n Não existe o valor no vetor");	
   return 0;
}