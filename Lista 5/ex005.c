/*Escreva um programa que leia um vetor de 20 posições e mostre-o na tela. Em seguida, troque
o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim
sucessivamente. Mostre o novo vetor depois da troca.
*/

#include <stdio.h>

int main(){
    int vetor[20];

    for(int i = 0; i < 20; i++){
        printf("Digite o %d numero do vetor 1: ", i + 1);
        scanf("%d", &vetor[i]);
    }
     
    printf("Vetor original: ");
    for(int i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
        printf("\n");

    for(int i = 0; i < 10; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[19 - i];
        vetor[19 - i] = temp;
    }

      printf("Vetor apos a troca: ");
    for(int i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}