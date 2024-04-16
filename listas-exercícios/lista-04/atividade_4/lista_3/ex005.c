#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario, ndependentes, salario_familia;

    printf("Digite o valor de seu salário: ");
    scanf("%f", &salario);
    printf("Digite o número de dependentes que existem em sua família: ");
    scanf("%f", &ndependentes);

    salario_familia = salario * 0.02 * ndependentes;

    printf("O valor do salário-família é %.2f", salario_familia);

    return 0;
}
