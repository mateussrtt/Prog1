/*Faça um programa que leia um vetor de 20 inteiros positivos (permita apenas que valores
corretos sejam digitados, pedindo para o usuário repetir cada número negativo até que ele digite um
positivo) e imprima todos os valores abaixo da média desses valores.
*/

#include <stdio.h>

int main() {
    int num[20];
    int soma = 0;
    float media;

    for(int i = 0; i < 20; i++){
      do {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &num[i]);

        if(num[i] <= 0){
            printf("Numero invalido! Digite um numero positivo.\n");
        }

      } while (num[i] <= 0);
        
        soma += num[i];
    }

    media = soma / 20.0;

    printf("\nValores abaixo da media (%.2f): ", media);

     for (int i = 0; i < 20; i++) {
        if (num[i] < media) {
            printf("%d ", num[i]);
        }
    }

    printf("\n");
}