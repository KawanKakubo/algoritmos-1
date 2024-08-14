#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float celsius, farenheit;
	printf("Digite a temperatura em F°: ");
	scanf("%f", &farenheit);
	celsius = 5 * (farenheit - 32) / 9;
	printf("A sua temperatura em °C é: %.2f",celsius);
	return 0;
}