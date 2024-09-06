/*Faça um algoritmo que leia um vetor de 20 posições e que em seguida percorra o vetor e
encontre o menor e o maior valor. Mostre-os juntamente com seus respectivos índices no vetor.*/

#include <stdio.h>

int main(){
    int vetor[20], maior, menor, indiceMaior, indiceMenor;

    for(int i = 0; i < 20; i++){
        printf("Digite o %d numero do vetor 1: ", i + 1);
        scanf("%d", &vetor[i]);

         maior = menor = vetor[0];
         indiceMaior = indiceMenor = 0;

    } 

    for(int i = 1; i < 20; i++){
        if(maior < vetor[i]){
            maior = vetor[i];
            indiceMaior = i + 1;
        }
        if(menor > vetor[i]){
            menor = vetor[i];
            indiceMenor = i + 1 ;
        }
    }

        printf("O menor valor do vetor e %d na posicao %d\n", menor, indiceMenor);
        printf("O maior valor do vetor e %d na posicao %d\n", maior, indiceMaior);

    return 0;
}