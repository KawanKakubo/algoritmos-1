#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float cm, d, v;
	
	printf("Digite a dist�ncia total percorrida: ");
	scanf("%f", &d);
	printf("Digite a volume total de combust�vel consumido: ");
	scanf("%f", &v);
	
	cm = d / v;
	
	printf("O consumo m�dio foi de: %.2f",cm);	
	return 0;
}