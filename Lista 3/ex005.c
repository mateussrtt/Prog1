#include <stdio.h>

int main(){
    int n, i, cont = 0, cont2;
    for(i = 0; i < 10; i++){
        printf("Digite os numeros: ");
        scanf("%d", &n);
        if(n >= 10 && n <= 20){
            cont++;
        }
        if(n < 10 || n > 20){
            cont2++;
        }

    }

    printf("Existem %d numeros no intervalo [10,20].", cont);
    printf("Existem %d numeros fora do intervalo [10,20].", cont2);



    return 0;
}