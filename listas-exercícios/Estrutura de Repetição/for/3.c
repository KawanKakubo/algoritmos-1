#include <stdio.h>

int main () {
	int i, acumulador=0, contador=0;
	
	for (i = 1; i <= 500; i++) {
		if (i % 3 == 0 && i % 2 == 1) {
			acumulador += i;
			contador += 1;
		}
	}
	
	printf("A soma dos %d valores e: %d", contador, acumulador);
	
	return 0;
}