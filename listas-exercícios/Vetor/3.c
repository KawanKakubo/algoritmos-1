#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10

int main () {
	srand(time(NULL)); 
	int vect[tam], i, valor;
	
	for (i = 0; i < 10;) {
   	   valor = rand()% 21;
	   if (valor % 2 == 0) {
		   if (valor <= 20 && valor >= 2) {
			   vect[i] = valor;
			   i++;
		   }
	   }
   }
   
   	printf("(");
	for (i=0; i<tam; i++) {
		if (i==tam-1) {
			printf("%d", vect[i]);
		} else {
			printf("%d, ", vect[i]);
		}
	}
	printf(")\n");
	
	return 0;
}