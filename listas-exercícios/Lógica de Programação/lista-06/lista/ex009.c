#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float parafusos_prod, parafusos_def, limite;
	
	printf("Digite o número de parafusos produzidos: ");
	scanf("%f", &parafusos_prod);
	printf("Digite o número de parafusos com defeito: ");
	scanf("%f", &parafusos_def);
	
	limite = 0.1 * parafusos_prod;
	
	if (parafusos_def > limite) {
		float diferenca = parafusos_def - limite;
		printf("A produção está ruim, tivemos %.2f parafusos com defeito à mais que o limite.",diferenca);
	}
	
	else {
		printf("A produção está boa!");
	}
	
	return 0;
}