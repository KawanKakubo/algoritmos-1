#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario, ndependentes, salario_familia;

    printf("Digite o valor de seu sal�rio: ");
    scanf("%f", &salario);
    printf("Digite o n�mero de dependentes que existem em sua fam�lia: ");
    scanf("%f", &ndependentes);

    salario_familia = salario * 0.02 * ndependentes;

    printf("O valor do sal�rio-fam�lia � %.2f", salario_familia);

    return 0;
}
