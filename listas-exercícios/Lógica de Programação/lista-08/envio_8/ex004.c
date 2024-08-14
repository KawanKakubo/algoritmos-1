#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 1 && nota <= 2) {
        printf("Situação: nota péssima\n");
    } 
	else if (nota >= 3 && nota <= 4) {
        printf("Situação: nota ruim\n");
    } 
	else if (nota >= 5 && nota <= 6) {
        printf("Situação: nota razoável\n");
    } 
	else if (nota == 7) {
        printf("Situação: nota boa\n");
    } 
	else if (nota >= 8 && nota <= 9) {
        printf("Situação: nota muito boa\n");
    } 
	else if (nota == 10) {
        printf("Situação: nota ótima\n");
    } 
	else {
        printf("Nota inválida.\n");
    }

    return 0;
}
