#include <stdio.h>

int main(){
    double vet[10];

    for(int i = 0; i < 10; i++){
        printf("Digite um numero para a posicao %d do vetor: ", i + 1);
        scanf("%lf", &vet[i]); // Com double se acrescenta o l no especificador.
    }

    for(int i = 0; i < 10; i++){
        printf("O endereco da posicao %d e igual a %p\n", i + 1, &vet[i]);
    }
    // No final, double armazena o dobro de bytes que o float.
    return 0;
}