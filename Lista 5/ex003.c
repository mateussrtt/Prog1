/*Escreva um programa que leia dois vetores de 10 posições e faça a multiplicação dos elementos
de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.*/

#include <stdio.h>

int main(){
    int vetor1[10], vetor2[10], vetor3[10];
    
    for(int i = 0; i < 10; i++){
        printf("Digite o %d numero do vetor 1: ", i + 1);
        scanf("%d", &vetor1[i]); 
        printf("Digite o %d numero do vetor 2: ", i + 1);
        scanf("%d", &vetor2[i]); 
        }

    for(int i = 0; i < 10; i++){
        vetor3[i] = vetor1[i] * vetor2[i];
    }
    printf("\nVetor resultante da multiplicacao:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d elemento do vetor resultante: %d\n", i + 1, vetor3[i]);
    }
}