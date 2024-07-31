#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
    int sexo, olhos, cabelos, idade;
    int maior_idade = 0, total_feminino = 0, fem_18_35_castanhos = 0;
    int soma_idade_feminino = 0, homens_21 = 0, olhos_azuis = 0;

    while (1) {
        printf("Sexo (1-M/2-F) [0 para encerrar]: "); scanf("%d", &sexo);
        if (sexo == 0) break;
        printf("Olhos (1-azuis, 2-verdes, 3-castanhos): "); scanf("%d", &olhos);
        printf("Cabelos (1-loiros, 2-castanhos, 3-pretos): "); scanf("%d", &cabelos);
        printf("Idade: "); scanf("%d", &idade);

        if (idade > maior_idade) maior_idade = idade;
        if (sexo == 2) {
            total_feminino++; soma_idade_feminino += idade;
            if (idade >= 18 && idade <= 35 && cabelos == 2) fem_18_35_castanhos++;
        }
        if (sexo == 1 && idade > 21) homens_21++;
        if (olhos == 1) olhos_azuis++;
    }

    printf("Maior idade: %d\n", maior_idade);
    if (total_feminino > 0) {
        printf("%% de mulheres 18-35 com cabelos castanhos: %.2f%%\n", 
               (double)fem_18_35_castanhos / total_feminino * 100);
        printf("Média de idade das mulheres: %.2f\n", 
               (double)soma_idade_feminino / total_feminino);
    }
    printf("Homens > 21 anos: %d\n", homens_21);
    printf("Indivíduos com olhos azuis: %d\n", olhos_azuis);

    return 0;
}
