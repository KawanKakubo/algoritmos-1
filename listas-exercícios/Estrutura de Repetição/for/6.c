#include <stdio.h>

int main () {
	int peso, i, maior, menor, contador=1;
	
	for (i = 1; i <= 6; i++) {
		printf("Peso da pessoa %d: ", i);
		scanf("%d", &peso);
		
		if (contador == 1) {
			maior = peso;
			menor = peso;
		} 
		
		if (peso > maior) {
			maior = peso;
		} 
		
		if (peso < menor) {
			menor = peso;
		}
		
		contador++;
		
	}
	
	printf("Maior peso: %d\nMenor peso: %d", maior, menor);
	
	return 0;
}