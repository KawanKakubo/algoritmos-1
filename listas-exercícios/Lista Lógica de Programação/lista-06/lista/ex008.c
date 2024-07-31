#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &a);
	printf("Digite outro valor inteiro: ");
	scanf("%d", &b);
	
	if (a < b) {
		printf("%d < %d.",a, b);
	}
	
	else {
		printf("%d < %d.",b, a);
	}
	
	return 0;
}