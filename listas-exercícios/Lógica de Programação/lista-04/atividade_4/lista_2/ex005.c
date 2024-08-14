#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Legal, você tem %d anos!",idade);
	return 0;
}