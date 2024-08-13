#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5
int main()
 {
	int VET[TAM];
	int I;
	srand(time(NULL)); // Definição da semente
// Preenchimento do vetor
	for (I=0;I<TAM;I++)
	{
		VET[I]= rand()% (11);
	}
// Apresentação do vetor
	for (I=0;I<TAM;I++)
	{
     		printf("%d ", VET[I]);
	  printf("\n\n");
    }
    return 0;
  }

