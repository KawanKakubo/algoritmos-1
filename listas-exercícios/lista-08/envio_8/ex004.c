#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 1 && nota <= 2) {
        printf("Situa��o: nota p�ssima\n");
    } 
	else if (nota >= 3 && nota <= 4) {
        printf("Situa��o: nota ruim\n");
    } 
	else if (nota >= 5 && nota <= 6) {
        printf("Situa��o: nota razo�vel\n");
    } 
	else if (nota == 7) {
        printf("Situa��o: nota boa\n");
    } 
	else if (nota >= 8 && nota <= 9) {
        printf("Situa��o: nota muito boa\n");
    } 
	else if (nota == 10) {
        printf("Situa��o: nota �tima\n");
    } 
	else {
        printf("Nota inv�lida.\n");
    }

    return 0;
}
