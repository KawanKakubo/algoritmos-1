#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int qnt_de_alunos, grupos, alunos_restantes;

    printf("Digite a quantidade de alunos de uma turma: ");
    scanf("%d", &qnt_de_alunos);

    grupos = qnt_de_alunos / 4;
    alunos_restantes = qnt_de_alunos % 4;

    printf("Quantidade de grupos completos de 4 alunos: %d.\n", grupos);
    printf("Quantidade de alunos que ficam de fora: %d.\n", alunos_restantes);

    return 0;
}
