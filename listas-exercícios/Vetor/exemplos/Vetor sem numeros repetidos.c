#include<stdio.h>
void main()
{
 int A[20],I,K,M,X;
	
 // Preenche o vetor A com 0
 for(I=0;I<20;I++)
     A[I]=0;
           

// Preenche o vetor com 20 elementos positivos não repetidos
	I=0;
	while(I<20)
	{
	   do{   
 	      printf("digite o numero: ");
 	      scanf("%d", &X);
 	   }while (X < 0);//verifica que o numero é positivo
                       
	   M=0;// representa que o numero diferente
	   for(K=0; K<I;  K++)
	       if(X==A[K])
		      M=1; // encontrei um numero repetido
                   
                  // Grava o valor digitado no vetor
	   if(M==0)  
	     {
           	A[I]=X; //Grava no vetor
		    I++;
	     }
      }
}
