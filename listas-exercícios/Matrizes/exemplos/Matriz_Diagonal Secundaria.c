#include <stdio.h>
#include <stdlib.h>
#define MAXL 3 
#define MAXC 3 
int main() {

	int matriz[MAXL][MAXC];
	int i, j, AUX;
	// Preenchimento da matriz
	for (i=0; i<MAXL; i++)  
		for (j=0; j<MAXC; j++) 
		{ 
		   do
		   {
		   	 printf("Informe um valor: ");
			 scanf("%i",&AUX);
		   }while(AUX<0);
		    matriz[i][j]=AUX;
		} 
	// Impressão da matriz
	for (i=0; i<MAXL; i++) 
	{
	   for (j=0; j<MAXC; j++) 	
		printf(" %i ", matriz[i][j]);
	   printf("\n");	
	}
	
    
	// Impressão da diagonal secundaria
	
	printf("\nDiagonal Secundaria");
	for (i=0; i<MAXL; i++) 
	  for (j=0; j<MAXC; j++) 	
         if (j==(MAXC-1)-i)    
            printf("% i", matriz[i][j]);
        
    printf("\n");    
}