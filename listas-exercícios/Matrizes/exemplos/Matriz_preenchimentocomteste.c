#include <stdio.h>
#include <stdlib.h>
#define MAXL 2 
#define MAXC 2 
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
		   }while((AUX<0)||(AUX%2!=0));//numeros positivos pares
		    matriz[i][j]=AUX;
		} 
	
	// Impressão da matriz
	for (i=0; i<MAXL; i++) 
	{
	   for (j=0; j<MAXC; j++) 	
		printf(" %i ", matriz[i][j]);
	   printf("\n");	
	}
	
   return 0;     
}