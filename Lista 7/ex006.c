#include <stdio.h>

void imprimirVet(int *vet, int tamanho){
    int *p = vet;
    
    for(int i = 0; i < tamanho; i++){
       printf("[%d]\t", *p);
       p++;
    }
}

int main(){
    int vetor[5];

     for (int i = 0; i < 5; i++) {
        printf("Digite um numero para a posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    imprimirVet(vetor, 5);

    return 0;
}