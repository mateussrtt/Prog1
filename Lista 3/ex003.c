#include <stdio.h>

int main(){
    int i, maior = -99999, menor = 99999, num;
    for(i = 0; i < 6; i++){
        printf("Escreva o numero: ");
        scanf("%d", &num);
        
        if(num > maior){
            maior = num;
        }
        if(num < menor){
            menor = num;
        }
    }

    printf("O menor numero e %d\n", menor);
    printf("O maior numero e %d", maior);
    

    return 0;
}