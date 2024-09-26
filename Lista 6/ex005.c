#include <stdio.h>

int main(){
    int m[4][4], i, j;

    for(i = 0; i < 4; i++){
        for(j = 0;  j < 4; j++){
            printf("Digite o valor para o valor [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    } printf("\n");

     printf("Matriz resultante!\n");
     for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    printf("Você deseja multiplicar ou somar? ");
    

    return 0;
}