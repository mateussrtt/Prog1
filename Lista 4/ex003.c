/*Crie um programa em C que peça um número inteiro ao usuário e retorne a soma de todos os
números de 1 até o número que o usuário introduziu ou seja: 1 + 2 + 3+ ... + n. Utilize uma função específica
para calcular o somatório.*/

#include <stdio.h>

int calcularSomatorio(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}



int main(){
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

     if (numero <= 0) {
        printf("Por favor, digite um numero inteiro positivo.\n");
    } else {
        int resultado = calcularSomatorio(numero);
        printf("A soma de todos os numeros de 1 ate %d e: %d\n", numero, resultado);
    }


    return 0;
}