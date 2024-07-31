#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	printf("Olá, mundo!!!");
	return 0;
}