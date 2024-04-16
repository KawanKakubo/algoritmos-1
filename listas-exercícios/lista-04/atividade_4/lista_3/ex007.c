#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float tempo_gasto, velocidade_media, distancia, litro_combustivel, galoes;

    printf("Digite o tempo em horas gasto na viagem: ");
    scanf("%f", &tempo_gasto);
    printf("Digite a velocidade média do seu veículo: ");
    scanf("%f", &velocidade_media);

    distancia = tempo_gasto * velocidade_media;
    litro_combustivel = distancia / 12; // 12 é a quantidade de KM/L que o carro fará (dados do exercício) 
    galoes = litro_combustivel / 5;

    printf("A quantidade de galões de combustível é de: %.2f", galoes);

    return 0;
}
