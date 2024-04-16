#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float parafusos_prod, parafusos_def, limite;
	
	printf("Digite o n�mero de parafusos produzidos: ");
	scanf("%f", &parafusos_prod);
	printf("Digite o n�mero de parafusos com defeito: ");
	scanf("%f", &parafusos_def);
	
	limite = 0.1 * parafusos_prod;
	
	if (parafusos_def > limite) {
		float diferenca = parafusos_def - limite;
		printf("A produ��o est� ruim, tivemos %.2f parafusos com defeito � mais que o limite.",diferenca);
	}
	
	else {
		printf("A produ��o est� boa!");
	}
	
	return 0;
}