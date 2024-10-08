#include <stdio.h>
#include <stdlib.h>

float* aloca_vetor_float(int n){
    float *vet = (float*) malloc (n * sizeof(float));
    if(vet == NULL){
        printf("Erro de alocacao!\n");
        exit(1);
    }
    return vet;
}

void exibe_vetor(float *vet, int n){
    printf("Elementos do vetor: \n");
    for(int i = 0; i < n; i++){
        printf("%.1f\t", *(vet + i));
    } printf("\n");
}

int main(){
    int n;
    
    printf("Digite a quantidade de elementos a serem alocados: ");
    scanf("%d", &n);

    float *vetor = aloca_vetor_float(n);

    for(int i = 0; i < n; i++){
        printf("Informe o valor do %d elemento: ", i + 1);
        scanf("%f", vetor + i);
    }

    exibe_vetor(vetor, n);

    free(vetor);

    return 0;
}