#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float atri, aqua, apen, nlados, ladocm;
	
	printf("Digite o número de lados do polígono regular: ");
	scanf("%f", &nlados);
	printf("Digite o tamanho desse lado em cm: ");
	scanf("%f", &ladocm);
	
	if (nlados == 3)
	{
		atri = pow(ladocm,2) * sqrt(3) / 4;
		printf("\nÉ um triângulo equilátero!");
		printf("\nA área desse triângulo vale: %.2f",atri);
	}
	else if (nlados == 4)
	{
		aqua = pow(ladocm,2);
		printf("\nÉ um QUADRADO!");
		printf("\nA área desse quadrado vale: %.2f",aqua);
	}
	else if (nlados == 5)
	{
		printf("PENTÁGONO!");
	}
	else 
	{
		printf("MAIS INFOS EM BREVE.");
	}
	
	
	return 0;
}