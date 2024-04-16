#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float celsius, farenheit;
	printf("Digite a temperatura em C°: ");
	scanf("%f", &celsius);
	farenheit = (9 * celsius / 5) + 32;
	printf("A sua temperatura em °F é: %.2f",farenheit);
	return 0;
}