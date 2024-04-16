#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
    float horas_trabalhadas, horas_extras, horas_ausentes, salario_minimo, valor_hora_trabalhada, valor_hora_extra, valor_hora_ausente, salario_bruto, desconto_inss, salario_final;

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    printf("Digite a quantidade de horas extras: ");
    scanf("%f", &horas_extras);
    printf("Digite a quantidade de horas ausentes: ");
    scanf("%f", &horas_ausentes);
    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario_minimo);

    valor_hora_trabalhada = salario_minimo * 0.04;
    valor_hora_extra = valor_hora_trabalhada * 1.50;
    valor_hora_ausente = valor_hora_trabalhada;

    salario_bruto = (horas_trabalhadas * valor_hora_trabalhada) + (horas_extras * valor_hora_extra) - (horas_ausentes * valor_hora_ausente);
    desconto_inss = salario_bruto * 0.11;
    salario_final = salario_bruto - desconto_inss;

    printf("O salário final do trabalhador é R$ %.2f", salario_final);

    return 0;
}