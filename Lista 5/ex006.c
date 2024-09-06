/*Escreva um programa que teste a passagem de parâmetro de vetores. Dentro da função main
crie um vetor de inteiros de tamanho qualquer. Solicite ao usuário que insira os dados para cada uma das
posições e exiba os números na tela. Em seguida chame a função ‘void altera_vetor (int vet[])’ que receberá
como parâmetro o vetor preenchido no main. A função deverá alterar alguns dos valores do vetor
manualmente (ex: vet[0]=-1, vet[1]=10) e não deverá retornar nada. Após a chamada da função
altera_vetor, no método main novamente, exiba novamente os valores em cada uma da posição do vetor e
verifique se os valores estão diferentes.*/

#include <stdio.h>

void altera_vetor (int vet[]){
    vet[0] = -1;
    vet[1] = 10;
}

int main(){
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for(int i = 0; i < tamanho; i++){
        printf("Digite o %d numero do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor antes da alteracao: ");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    altera_vetor(vetor);

    printf("Vetor apos alteracao: ");
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}