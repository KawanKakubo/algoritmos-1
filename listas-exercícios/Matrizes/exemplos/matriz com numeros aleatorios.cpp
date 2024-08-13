#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
main()
 {
	int MAT[TAM][TAM];
	int L,C;
	srand(time(NULL)); // Definição da semente
// Preenchimento do vetor
	for (L=0;L<TAM;L++)
      for (C=0;C<TAM;C++)
		MAT[C][L] = rand()%(100+1);
// Impressão dA matriz
	for (L=0;L<TAM;L++)
      {
      for (C=0; C<TAM;C++)
		printf("%d ", MAT[C][L]);
	  printf("\n\n");
      }
	}

