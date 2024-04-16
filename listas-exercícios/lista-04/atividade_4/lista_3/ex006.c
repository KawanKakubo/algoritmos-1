#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float preco_montadora, preco_venda, valor_impostos;

    printf("Digite o valor do preço informado pela montadora: ");
    scanf("%f", &preco_montadora);

    valor_impostos = (0.15 * preco_montadora) + (0.11 * preco_montadora) + (0.17 * preco_montadora);
    preco_venda = preco_montadora + valor_impostos;

    printf("O valor do seu carro é de: %.2f. E o valor de impostos cobrados foram: %.2f.", preco_venda, valor_impostos);

    return 0;
}
