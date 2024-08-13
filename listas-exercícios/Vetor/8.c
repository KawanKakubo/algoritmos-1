#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 100

int main () {
	srand(time(NULL));
	int vect[tam], i, j, k, l, numero, flag=0, aux, vect2[tam];
	
	for (i=0; i<tam; i++) {
		
		numero = rand()% 101;
		
		   	for (j=0; j<tam; j++) {
				if (numero == vect[j]) {
					flag = 1;
					break;
				}
	  	    }	
			
			if (flag == 1) {
				flag = 0;
				i--;
			}  else {
				vect[i] = numero;
			}
	}
		
	for (k=0; k<tam-1; k++) {
		for (l=0; l<tam-k-1; l++) {
			if (vect[l] > vect[l+1]) {
			   	aux = vect[l];
				vect[l] = vect[l+1];
				vect[l+1] = aux;
			}
		}
	}
	
	for (i=0; i<tam; i++) {
		if (vect[i] % 2 == 0) {
			vect2[i] = 1;
		} if (vect[i] % 2 == 1) {
			vect2[i] = 0;
		}
	}
	
	for (i=0; i<tam; i++) {
		printf("%d ", vect2[i]);
	}
	
	return 0;
}