#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float cm, d, v;
	
	printf("Digite a distância total percorrida: ");
	scanf("%f", &d);
	printf("Digite a volume total de combustível consumido: ");
	scanf("%f", &v);
	
	cm = d / v;
	
	printf("O consumo médio foi de: %.2f",cm);	
	return 0;
}