#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int l1, l2, l3;
	printf("Digite o 1� lado do tri�ngulo: ");
	scanf("%d", &l1);
	printf("Digite o 2� lado do tri�ngulo: ");
	scanf("%d", &l2);
	printf("Digite o 3� lado do tri�ngulo: ");
	scanf("%d", &l3);
	
	if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2) {
		printf("Forma um tri�ngulo!");
	} 
	else {
		printf("\nN�o forma um tri�ngulo!");
	}
	
	return 0;
}