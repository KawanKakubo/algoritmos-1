#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 9
main()
 {
	int MAT[TAM][TAM];
	int L,C;
	srand(time(NULL)); // Definição da semente
// Preenchimento do vetor
	for (L=0;L<TAM;L++)
      for (C=0;C<TAM;C++)
		MAT[C][L] = rand()%(9+1);
// Impressão dA matriz
	for (L=0;L<TAM;L++)
      {
      for (C=0; C<TAM;C++)
		printf(" %d  ", MAT[C][L]);
	  printf("\n\n");
      }
      
    printf("\n\n");
	for (L=0;L<TAM;L++)
      {
      for (C=0; C<TAM;C++)
         if ( L==C)
		    printf(" %d  ", MAT[C][L]);    
      
      
      
	}
	return 0;
 }

