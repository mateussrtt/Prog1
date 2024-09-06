// Função para calcular a soma, multiplicação e média dos inversos dos números inteiros em um intervalo

#include <stdio.h>

void calcularInversos(int n1, int n2) {
   
    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    int soma = 0;
    int multiplicacao = 1;
    double somaInversos = 0.0;
    int contagemInversos = 0;

    for (int i = n1; i <= n2; i++) {
        soma += i;
        multiplicacao *= i;
        
        if (i != 0) {
            somaInversos += 1.0 / i;
            contagemInversos++;
        }
    }

    double mediaInversos;
    if (contagemInversos > 0) {
        mediaInversos = somaInversos / contagemInversos;
    } else {
        mediaInversos = 0;
    }

    printf("Soma: %d\n", soma);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Media dos inversos: %.6f\n", mediaInversos);
}

int main() {
    int n1, n2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

    calcularInversos(n1, n2);

    return 0;
}
