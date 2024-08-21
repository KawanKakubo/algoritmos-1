#include <stdio.h>
#include <locale.h>

int apresentarMenu() {
    int opcao;
    printf("MENU:\n");
    printf("[1] Converter quilômetros em milhas\n");
    printf("[2] Converter milhas em quilômetros\n");
    printf("[0] Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    return opcao;
}

float lerDistancia() {
    float distancia;
    printf("Digite a distância: ");
    scanf("%f", &distancia);
    return distancia;
}

float converterKmParaMi(float km) {
    return km * 0.6213;
}

float converterMiParaKm(float milhas) {
    return milhas / 0.6213;
}

void apresentarResultado(float d, float c, int t) {
    if (t == 1) {
        printf("%.2f km é igual a %.2f milhas\n\n", d, c);
    } else if (t == 2) {
        printf("%.2f milhas é igual a %.2f km\n\n", d, c);
    }
}

int main () {
    int opcao;
    float distancia, resultado;
	setlocale(LC_ALL, "Portuguese");
	
    do {
        opcao = apresentarMenu();

        if (opcao == 1) {
            distancia = lerDistancia();
            resultado = converterKmParaMi(distancia);
            apresentarResultado(distancia, resultado, 1);
        } else if (opcao == 2) {
            distancia = lerDistancia();
            resultado = converterMiParaKm(distancia);
            apresentarResultado(distancia, resultado, 2);
        } else if (opcao == 0) {
            printf("Encerrando o programa...\n");
        } else {
            printf("Opção inválida. Tente novamente.\n\n");
        }

    } while(opcao != 0);

    return 0;
}
