#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    do {
        printf("Digite um valor inteiro (nao negativo): ");
        scanf("%d", &n);

        if(n < 0){
            printf("Valor invalido! 'N' nao pode ser negativo!\n");
        }
    } while(n < 0);

    int *vet = (int *) malloc (n * sizeof(int));
    if(vet == NULL){
        printf("Erro de alocacao!\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
         do {
            printf("Digite o %d valor: ", i + 1);
            scanf("%d", &vet[i]);
            
            if (vet[i] < 1) {
                printf("Valor invalido! O valor tem que ser maior ou igual a 1.\n");
            }
        } while (vet[i] < 1);
    }

        printf("Os valores do vetor sao: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    } printf("\n");

    free(vet);

    return 0;
}