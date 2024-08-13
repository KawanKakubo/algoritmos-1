# include <stdio.h>
#define TAM 10
main()
{
  int MAT[TAM][TAM]; 
  int  L,C, soma=0; 
  // carregue uma matriz identidade
  for (L=0;L<TAM;L++)    
  	  for (C=0;C<TAM;C++) 
	    {
	     if (L==C)
	        MAT[L][C]=1;
	     else
		    MAT[L][C]=0;
	    }
 printf("\n\n A matriz identidade \n\n");
  
   	for (L=0;L<TAM;L++) 
  	  {
	  for (C=0;C<TAM;C++) 
	    {
	    	printf("%d ",MAT[L][C]);
		}
      printf("\n");// salta linha
     }
}
