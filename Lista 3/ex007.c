#include <stdio.h>

int main() {
    int valor = 1, cont_positivos = 0, cont_negativos = 0, total = 0;
    float soma = 0.0;

    while (valor != 0) {
        printf("Digite um valor (digite 0 para encerrar): ");
        scanf("%d", &valor);

        if (valor != 0) {
            soma += valor;
            total++;

            if (valor > 0) {
                cont_positivos++;
            } else {
                cont_negativos++;
            }
        }
    }

    if (total > 0) {
        float media = soma / total;

        float percentualPositivos = ((float)cont_positivos / total) * 100;
        float percentualNegativos = ((float)cont_negativos / total) * 100;

        printf("Media aritmetica: %.2f\n", media);
        printf("Quantidade de valores positivos: %d\n", cont_positivos);
        printf("Quantidade de valores negativos: %d\n", cont_negativos);
        printf("Percentual de valores positivos: %.1f\n", percentualPositivos);
        printf("Percentual de valores negativos: %.1f\n", percentualNegativos);
    } else {
        printf("Nenhum valor foi inserido.\n");
    }

    return 0;
}
