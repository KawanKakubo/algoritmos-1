#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 8

int main() {
   srand(time(NULL)); 
   int i, vect[tam], valor, cont=0;
   
   for (i = 0; i < 10; i++) {
      vect[i] = rand()% 11;
   }
   
   printf("Diga um numero de 0 a 10: ");
   scanf("%d", &valor);
   
   	printf("(");
	for (i=0; i<tam; i++) {
		if (i==tam-1) {
			printf("%d", vect[i]);
		} else {
			printf("%d, ", vect[i]);
		}
	}
	printf(")\n");
   
   for (i = 0; i < 10; i++) {
	   if (valor == vect[i]) {
		   printf("A posicao em que este valor se encontra e: %d", i);
	   	   cont += 1000;
		   break;
	   } else {
		   cont++;
	   }
   }
   
   if (cont < 1000) {
	   printf("Numero nao encontrado.");
   }
   
   return 0;
}