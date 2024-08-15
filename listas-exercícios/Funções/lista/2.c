#include <stdio.h>

void triangulo();
void quadrado();
void pentagono();
int main () {
	int lados;
	
	printf("Numero de lados: ");
	scanf("%d", &lados);		
	
	
	if (lados == 3) {
		triangulo();
	} if (lados == 4) {
		quadrado();
	} if (lados == 5) {
		pentagono();
	}
	
	return 0;
}

void triangulo () {
	printf("Um poligono de 3 lados e um triangulo.");
}

void quadrado () {
	printf("Um poligono de 4 lados e um quadrado.");
}

void pentagono () {
	printf("Um poligono de 5 lados e um pentagono.");
}