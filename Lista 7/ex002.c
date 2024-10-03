#include <stdio.h>

int main() {
    int x, y;

    // Leitura das variáveis
    printf("Digite o valor para x: ");
    scanf("%d", &x);
    printf("Digite o valor para y: ");
    scanf("%d", &y);

    // Comparação dos endereços de memória e exibição do conteúdo do maior
    if (&x > &y) {
        printf("O conteudo do maior endereco de memoria e: %d\n", x);
    } else {
        printf("O conteudo do maior endereco de memoria e: %d\n", y);
    }

    return 0;
}