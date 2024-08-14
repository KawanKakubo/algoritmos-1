#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float idade, anos, meses, dias;
	
	printf("Digite a idade: ");
	scanf("%f", &idade);
	
	anos = idade / 365.25;
	meses = idade / 30;
		
	printf("Anos = %.2f, Meses = %.2f, Dias = %.2f",anos, meses, idade);
	return 0;
}