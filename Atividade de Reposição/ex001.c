#include <stdio.h>
#include <stdlib.h>

void eh_multiplo(int a, int b, int *resp){ //Verificação se a é multiplo de b
    if(a % b == 0){
        *resp = 1;
    } else {
        *resp = 0;
    }
}

int main(){
    int x, n;
    int *vet;

    printf("Digite um numero inteiro para x: ");
    scanf("%d", &x);
    printf("Digite um numero inteiro para n: ");
    scanf("%d", &n);    

    if(n <= 0){
        printf("O valor de n tem que ser maior que zero.\n");
        return 1;
    }

    vet = (int *) malloc (n * sizeof(int));
    if(vet == NULL){
        printf("Erro de alocacao.\n");
        return 1;
    }

    printf("Digite %d numeros inteiros:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    printf("Numeros lidos e verificacao se sao multiplos de %d\n", x);
    for(int i = 0; i < n; i++){
        int resp;
        eh_multiplo(vet[i], x, &resp);
        if(resp){
            printf("%d e multiplo de %d\n", vet[i], x);
        } else {
            printf("%d nao e multiplo de %d\n", vet[i], x);
        }
    }

    free(vet);
    return 0;
}