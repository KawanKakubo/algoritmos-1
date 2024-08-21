#include <stdio.h>
#include <locale.h>

float lerNota (int prova) {
    float nota;
    printf("Digite a nota da P%d: ", prova);
    scanf("%f", &nota);
    return nota;
}

float lerPeso (int prova) {
    float peso;
    printf("Digite o peso da P%d: ", prova);
    scanf("%f", &peso);
    return peso;
}

void apresentarMedia (float media) {
    printf("A média calculada é: %.2f\n", media);
}

void calcularPonderada (float nota1, float nota2) {
    float peso1 = lerPeso(1);
    float peso2 = lerPeso(2);
    float media = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);
    apresentarMedia(media);
}

void calcularAritmetica (float nota1, float nota2) {
    float media = (nota1 + nota2) / 2;
    apresentarMedia(media);
}

int menu () {
    int opcao;
    printf("\nCálculo da Média na Disciplina de Algoritmos\n");
    printf("[1] MÉDIA PONDERADA\n");
    printf("[2] MÉDIA ARITMÉTICA\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    return opcao;
}

int main () {
	setlocale(LC_ALL, "Portuguese");
    float nota1, nota2;
    int opcao;

    nota1 = lerNota(1);
    nota2 = lerNota(2);

    opcao = menu();

    switch (opcao) {
        case 1:
            calcularPonderada(nota1, nota2);
            break;
        case 2:
            calcularAritmetica(nota1, nota2);
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}


// Obrigado por tudo, professora, a senhora estará na história da minha vida, obrigado por tantos ensinamentos! Temos que marcar a fotinha emmmm :)