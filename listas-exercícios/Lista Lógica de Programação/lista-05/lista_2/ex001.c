#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float anos, batidas;
	
	printf("Digite a quantidade de anos que uma pessoa viver�: ");
	scanf("%f", &anos);
	
	batidas = anos * 365.25 * 24 * 60 * 60;
	
	printf("A pessoa bater� seu cora��o %.f vezes.",batidas);
	return 0;
}