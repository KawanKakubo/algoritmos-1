#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float alt, raio, precolata, area, precofinal, qntlatas;
	printf("Digite a altura do tanque: ");
	scanf("%f", &alt);
	printf("Digite o raio do tanque: ");
	scanf("%f", &raio);
	printf("Digite o valor da lata de tinta: ");
	scanf("%f", &precolata);
	area = 2 * 3.14 * raio * (alt + raio);
	qntlatas = area / 15;
	precofinal = qntlatas * precolata;
	printf("Para um tanque de %.2f metros de altura e %.2f metros de raio, considerando o preço de R$%.2f por lata de tinta,",alt, raio, precolata);
	printf(" são necessárias %.2f latas de tinta e o custo é de R$%.2f.",qntlatas, precofinal);
	return 0;
}