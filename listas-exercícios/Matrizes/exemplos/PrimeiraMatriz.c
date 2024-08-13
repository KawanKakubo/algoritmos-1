#include <stdio.h>

#define TAM 2
int main()
 {
	int MAT[TAM][TAM];
	int L,C;
	
    printf("Carregamento da matriz...");
	for (L=0;L<TAM;L++)
      for (C=0;C<TAM;C++)
	  {
	  	printf("\nInsira um valor: ");
	  	scanf("%i", &MAT[L][C]);
	  	
	  }
    		 

    printf("\nApresentando a matriz...\n");
	for (L=0;L<TAM;L++)
      {
      
	  for (C=0; C<TAM;C++)
		printf("%d ", MAT[C][L]);
	  printf("\n");
      }
    
	return 0;  
 }
