#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float x1, y1, x2, y2, distancia;

    printf("Digite um valor qualquer para se assumir ao x1 do ponto P (x1, y1): ");
    scanf("%f", &x1);
    printf("Digite um valor qualquer para se assumir ao y1 do ponto P (x1, y1): ");
    scanf("%f", &y1);
    printf("Digite um valor qualquer para se assumir ao x2 do ponto Q (x2, x2): ");
    scanf("%f", &x2);
    printf("Digite um valor qualquer para se assumir ao y2 do ponto Q (x2, y2): ");
    scanf("%f", &y2);

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("A distância entre os pontos P(%.2f, %.2f) e Q(%.2f, %.2f) é %.2f", x1, y1, x2, y2, distancia);

    return 0;
}
