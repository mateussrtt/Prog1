#include <stdio.h>
#include <stdlib.h>

int* multiplica_vetores(int *a, int *b, int qtd){
    int *c = (int *) malloc (qtd * sizeof(int));
    if (c == NULL) {
        printf("Erro de alocacao!\n");
        return NULL;
    }

    for(int i = 0; i < qtd; i++){
        c[i] = a[i] * b[i];
    }
    return c;
}   

int main(){
    int qtd;
    int i;
    int *vet1, *vet2;

    printf("Digite a quantidade de elementos para os vetores: ");
    scanf("%d", &qtd);

    vet1 = (int *) malloc (qtd * sizeof(int));
    vet2 = (int *) malloc (qtd * sizeof(int));
    if(vet1 == NULL || vet2 == NULL){
        printf("Erro de alocacao!\n");
        return 1;
    }

    
    for(i = 0; i < qtd; i++){
        printf("Digite o %d elemento do 1 vetor: ", i + 1);
        scanf("%d", &vet1[i]);
    }

    printf("\n");
    for(i = 0; i < qtd; i++){
        printf("Digite o %d elemento do 2 vetor: ", i + 1);
        scanf("%d", &vet2[i]);
    }

    int *resultado = multiplica_vetores(vet1, vet2, qtd);
        if(resultado == NULL){
            free(vet1); 
            free(vet2); 
            return 1; 
        }

    printf("Resultado da multiplicacao dos vetores: ");
    for (int i = 0; i < qtd; i++) {
        printf("%d ", resultado[i]);
    } printf("\n");

    free(vet1);
    free(vet2);
    free(resultado);

    return 0;
}