/*Faça um programa que leia 10 valores reais e os apresente na ordem inversa entrada. */

#include <stdio.h>

int main(){
    int vetor[10];
    for(int i = 0; i < 10; i++){
        printf("Qual o %d valor? ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nA ordem inversa dos valores entrados e:\n");
    for(int i = 0; i < 10; i++){
        printf("%d\n", vetor[9-i]);
    }


    return 0;
}