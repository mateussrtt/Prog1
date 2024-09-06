/*Escreva um programa que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte
quantos valores pares e ímpares existem no vetor.*/

#include <stdio.h>

int main() {
    int num[20];
    int pares = 0, impares = 0;

    for(int i = 0; i < 20; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 20; i++) {
        if(num[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("\nVetor: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", num[i]);
    }

    printf("\n\nQuantidade de numeros pares: %d", pares);
    printf("\nQuantidade de numeros impares: %d\n", impares);

    return 0;
}
