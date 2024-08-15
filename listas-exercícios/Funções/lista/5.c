#include <stdio.h>

int abs ();
int main () {
	int valores[10], valoresabs[10];
	int i;
	
	for (i=0; i<10; i++) {
		printf("Valor: ");
		scanf("%d", &valores[i]);
		valoresabs[i] = abs(valores[i]);
	}
	
	printf("Valores: ");
	for (i=0; i<10; i++) {
		printf("%d ", valores[i]);
	}
	
	printf("\nValores absolutos: ");
	for (i=0; i<10; i++) {
		printf("%d ", valoresabs[i]);
	}
		
	return 0;
}

int abs (n) {
	if (n >= 0) {
		return n;
	} if (n < 0) {
		return -n;
	}
}