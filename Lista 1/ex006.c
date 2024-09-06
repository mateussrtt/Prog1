/*
Faça um programa para ler valores para as variáveis inteiras A e B. Efetuar a troca dos valores
de forma que a variável A passe a possuir o valor da variável B e que a variável B passe a possuir o valor da
variável A. Apresentar os valores iniciais e os valores finais de A e B.
*/

#include <stdio.h>

int main() {
    int A, B, aux;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    aux = A;
    A = B;
    B = aux;
    printf("Valor inicial de A: %d\n", B);
    printf("Valor inicial de B: %d\n", A);
    printf("Valor final de A: %d\n", A);
    printf("Valor final de B: %d\n", B);


    return 0;
}