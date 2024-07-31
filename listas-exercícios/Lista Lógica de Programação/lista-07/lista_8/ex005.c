#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float imc, altura, massa;
		
	printf("Digite sua altura, em metros: ");
	scanf("%f", &altura);
	printf("Digite seu peso, em kilogramas: ");
	scanf("%f", &massa);
	
	imc = massa / pow(altura,2);
		
	if (imc < 17) {
		printf("Muito abaixo do peso!");
	}
	else if (imc < 18.5) {
		printf("Abaixo do peso!");
	}
	else if (imc < 25) {
		printf("Peso normal!");
	}
	else if (imc < 30) {
		printf("Acima do peso!");
	}
	else if (imc < 35) {
		printf("Obesidade I!");
	}
	else if (imc < 40) {
		printf("Obesidade II (severa)!");
	}
	else {
	   	printf("Obesidade III (mórbida)!");
	}
	
	return 0;
}