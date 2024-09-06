/*
Escrever um programa para ler dois números inteiros e exibir a soma, a diferença, o produto e
o quociente. A saída deve mostrar os operandos, o operador e o resultado de cada operação.
*/

#include <stdio.h>

int main(){
    int n1, n2, soma, sub, div, mult;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;
    printf("%d + %d = %d\n", n1, n2, soma);
    printf("%d - %d = %d\n", n1, n2, sub);
    printf("%d * %d = %d\n", n1, n2, mult);
    printf("%d / %d = %d\n", n1, n2, div);

    return 0;
}
