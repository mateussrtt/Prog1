#include <stdio.h>

int main(){
    int i, l, j, c, m[100][100];
    
    printf("Qual a quantidade de linhas? ");
    scanf("%d", &l);

    printf("Qual a quantidade de colunas? ");
    scanf("%d", &c);

    for(i = 0; i < l; i++){
        for(j = 0;  j < c; j++){
            printf("Digite o valor para m[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    } printf("\n");

    printf("Matriz resultante!\n");
     for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}