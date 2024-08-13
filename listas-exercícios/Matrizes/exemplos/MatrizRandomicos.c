#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXL 10 
#define MAXC 10 
int main() 
{
	int matriz[MAXL][MAXC];
	int i,j;
	srand(time(NULL)); // Definicao da semente
	// Preenchimento da matriz
	for (i=0; i<MAXL; i++)  
		for (j=0; j<MAXC; j++)  
	    	matriz[i][j] = rand()%(MAXL);//rand-numeros randomicos/aleatoriois
	// Impressao do matriz
	for (i=0; i<MAXL; i++) 
	{
	   for (j=0; j<MAXC; j++) 	
		printf(" %d ", matriz[i][j]);
	   printf("\n");	
	}


}