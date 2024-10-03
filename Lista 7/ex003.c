#include <stdio.h>

int main(){
    float vet[10];

    for(int i = 0; i < 10; i++){
        printf("Digite um numero para a posicao %d do vetor: ", i + 1);
        scanf("%f", &vet[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("O endereco da posicao %d e igual a %p\n", i + 1, &vet[i]);
    }

    return 0;
}