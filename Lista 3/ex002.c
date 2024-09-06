#include <stdio.h>

int main(){
int i, numero, maior = 0;

for(i = 0 ; i < 10 ; i++){
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > maior) {
            maior = numero;
        }
}
    printf("O maior numero foi %d\n", maior);

    return 0;
}