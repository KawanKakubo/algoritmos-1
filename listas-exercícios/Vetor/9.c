#include <stdio.h>
#include <locale.h>
#define tamanho 20

int main() {
	setlocale(LC_ALL, "Portuguese");
    int vetor[tamanho];
    int i, quantidade_multiplos_de_5 = 0;

    for (i = 0; i < tamanho; i++) {
        vetor[i] = 1 + 2 * i;
    }

    printf("Números múltiplos de 5:\n");
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] % 5 == 0) {
            printf("%d ", vetor[i]);
            quantidade_multiplos_de_5++;
        }
    }
    printf("\nQuantidade de múltiplos de 5: %d\n", quantidade_multiplos_de_5);

    printf("Números nas posições pares:\n");
    for (i = 0; i < tamanho; i += 2) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Vetor original:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
