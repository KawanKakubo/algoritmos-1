#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float anos, batidas;
	
	printf("Digite a quantidade de anos que uma pessoa viverá: ");
	scanf("%f", &anos);
	
	batidas = anos * 365.25 * 24 * 60 * 60;
	
	printf("A pessoa baterá seu coração %.f vezes.",batidas);
	return 0;
}