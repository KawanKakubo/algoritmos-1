#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float tempo_gasto, velocidade_media, distancia, litro_combustivel, galoes;

    printf("Digite o tempo em horas gasto na viagem: ");
    scanf("%f", &tempo_gasto);
    printf("Digite a velocidade m�dia do seu ve�culo: ");
    scanf("%f", &velocidade_media);

    distancia = tempo_gasto * velocidade_media;
    litro_combustivel = distancia / 12; // 12 � a quantidade de KM/L que o carro far� (dados do exerc�cio) 
    galoes = litro_combustivel / 5;

    printf("A quantidade de gal�es de combust�vel � de: %.2f", galoes);

    return 0;
}
