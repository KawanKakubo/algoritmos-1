#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10

int main () {
	srand(time(NULL));
	int vect[tam], i, j, numero, flag=0, valor, achei=0;
	
	for (i=0; i<tam; i++) {
		
		numero = rand()% 21;
	
		for (j=0; j<tam; j++) {
			if (numero == vect[j]) {
				flag = 1;
				break;
			}
		}
			
		if (flag == 1) {
			flag = 0;
			i--;
	  	} else {
			  vect[i] = numero;
		  }
	}
   
    printf("Digite um numero de 1 a 20: ");
    scanf("%d", &valor);
    
    for (i=0; i<tam; i++) {
		if (valor == vect[i]) {
			printf("Valor encontrado.\n");
			achei += 1;
		}
	}
    
    if (achei == 0) {
		printf("Valor nao encontrado\n");
	}
    
   for(i = 0; i < tam; i++){
        printf("%d ", vect[i]);
    }
	
	return 0;
}