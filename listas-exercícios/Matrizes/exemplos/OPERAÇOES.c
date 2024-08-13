#include <stdio.h>
#define TAML 3
#define TAMC 3
int main()
 {
   int A [TAML][TAMC]; 
   int lin, col, S=0,SU=0;

  
   for (lin=0; lin<TAML; lin++)
       for (col=0; col<TAMC; col++)
	   {
	   	
           printf("Elemento na posição [%i][%i]:",lin,col);
		   scanf("%i",&A[lin][col]);
	   }
	   
   printf("\n");
   for (lin=0; lin<TAML; lin++)
      {
       for (col=0; col<TAMC; col++)
	     printf("%i  ", A[lin][col]);
	   
       printf("\n");
      }
    
	
    for (lin=0; lin<TAML; lin++)
       for (col=0; col<TAMC; col++)
	   {
		if ( lin ==0) //soma da primeira linha
		    S=S+A[lin][col];
	   
	    if( lin== TAML-1)//soma da ultima linha
			SU=SU+A[lin][col];
		
		if ( lin==col)// substitui na diagonal principal0
		    A[lin][col]=0;		
	   } 

   printf("\n");
   for (lin=0; lin<TAML; lin++)
      {
       for (col=0; col<TAMC; col++)
	   {
	   	 printf("%i  ", A[lin][col]);
	   }
       printf("\n");
      }
      
      
      
      
}
