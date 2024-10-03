#include <stdio.h>

int main(){
    int vet[5];
    int *p, i;

    p = vet;

    for(i = 0; i < 5; i++){
        printf("Digite um numero para a posicao %d: ", i + 1);
        scanf("%d", p + i);
    }

    printf("\nO dobro de cada valor lido:\n");
        for (i = 0; i < 5; i++) {
            printf("O dobro do valor da posicao %d e %d\n", i + 1, *(p + i) * 2);
        }

    return 0;
}