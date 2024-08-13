# include <stdio.h>
#define TAM 10
int main()
{
  int MAT[TAM][TAM];
  int  L,C, soma=0;
  
  //Carregando a matriz com zeros
  for (L=0;L<TAM;L++)
    for (C=0;C<TAM;C++)
	     MAT[L][C]=0;

    
  printf("\nApresentando a matriz\n\n");
  for (L=0;L<TAM;L++)
    {
	  for (C=0;C<TAM;C++)
	    	printf("%d ",MAT[L][C]);
	  printf("\n");// salta linha
    }
 
  
   //Atribuindo 1 a diagonal secundaria
   for (L=0;L<TAM;L++) //LC (0 4,1 3,2 2,3 1,4 0)
  	     MAT[L][TAM-L-1]=1;

   printf("\nApresentando a matriz trocada\n\n");
   for (L=0;L<TAM;L++)
    {
	  for (C=0;C<TAM;C++)
	    printf("%d ",MAT[L][C]);
		 
       printf("\n");// salta linha
     }
   return 0;
}
