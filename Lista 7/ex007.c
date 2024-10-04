#include <stdio.h>
#include <stdlib.h>

void le_array(int *vet, int qtd){
    int i;

    for(i = 0; i < qtd; i++){
        printf("Digite o %d numero do vetor: ", i + 1);
        scanf("%d",&vet[i]);
    }
}

void exibe_array(int *vet, int qtd){
    int i;

    printf("[");
    for(i = 0; i < qtd; i++){
        if(i != qtd - 1){
            printf("%d, ", vet[i]);
        } else {
            printf("%d", vet[i]);
        }
    } printf("]\n");
}

long int multiplica_array(int *vet, int qtd){
    long int resultado = 1;
    int i;

    for(i = 0; i < qtd; i++){
        resultado *= vet[i];
    }

    return resultado;
}

int main(){
    int *vet, qtd;

    printf("Digite a quantidade de numeros para preencher o vetor: ");
    scanf("%d", &qtd);

    vet = (int *) malloc (qtd * sizeof(int));
    if (vet == NULL) {
        printf("Erro de alocacao!\n");
        return 1;
    }

    le_array(vet, qtd);

    printf("Vetor completo: ");
    exibe_array(vet, qtd);

    long int resultado = multiplica_array(vet, qtd);
    printf("Multiplicacao de todos os elementos: %ld\n", resultado);

    free(vet);

    return 0;
}