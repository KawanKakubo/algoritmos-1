#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float atri, aqua, apen, nlados, ladocm;
	
	printf("Digite o n�mero de lados do pol�gono regular: ");
	scanf("%f", &nlados);
	printf("Digite o tamanho desse lado em cm: ");
	scanf("%f", &ladocm);
	
	if (nlados == 3)
	{
		atri = pow(ladocm,2) * sqrt(3) / 4;
		printf("\n� um tri�ngulo equil�tero!");
		printf("\nA �rea desse tri�ngulo vale: %.2f",atri);
	}
	else if (nlados == 4)
	{
		aqua = pow(ladocm,2);
		printf("\n� um QUADRADO!");
		printf("\nA �rea desse quadrado vale: %.2f",aqua);
	}
	else if (nlados == 5)
	{
		printf("PENT�GONO!");
	}
	else 
	{
		printf("MAIS INFOS EM BREVE.");
	}
	
	
	return 0;
}