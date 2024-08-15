#include <stdio.h>

void valores ();
int main () {
	
	valores();
	
	return 0;
}

void valores () {
	int valores[4], i, maior, menor;
	for (i=0; i<4; i++) {
		printf("Digite o %d valor: ", i+1);
		scanf("%d", &valores[i]);
		
		if (i == 0) {
			maior = valores[i];
			menor = valores[i];
		} if (valores[i] > maior) {
			maior = valores[i];
		} if (valores[i] < menor) {
			menor = valores[i];
		}
	}
	
	printf("Para os valores %d, %d, %d e %d, o maior valor e %d e o menor e %d.", valores[0], valores[1], valores[2], valores[3], maior, menor);

}