#include <stdio.h>
#include <stdlib.h>

void somaArray(int *vet1, int *vet2, int *vetResult, int tamanho){
    int i;

    for(i = 0; i < tamanho; i++){
        *(vetResult + i) = *(vet1 + i) + *(vet2 + i);
    }
}

int main(){
    int tamanho, i;

    printf("Digite o numero de elementos dos vetores:");
    scanf("%d", &tamanho);
    printf("\n");

    int *vet1 = (int *)malloc(tamanho * sizeof(int));
    int *vet2 = (int *)malloc(tamanho * sizeof(int));
    int *vetResult = (int *)malloc(tamanho * sizeof(int));

    if (vet1 == NULL || vet2 == NULL || vetResult == NULL) {
        printf("Erro de alocacao\n");
        return 1;
    }

    for(i = 0; i < tamanho; i++){
        printf("Digite o %d elemento do primeiro vetor: ", i + 1);
        scanf("%d", vet1 + i);
    } printf("\n");

    for(i = 0; i < tamanho; i++){
        printf("Digite o %d elemento do segundo vetor: ", i + 1);
        scanf("%d", vet2 + i);
    }

    somaArray(vet1, vet2, vetResult, tamanho);

    printf("Vetores somados de acordo com cada entrada: ");
    for(i = 0; i < tamanho; i++){
        printf("[%d]", *(vetResult + i));
    }

    free(vet1);
    free(vet2);
    free(vetResult);

    return 0;
}