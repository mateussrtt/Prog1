#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int m[3][6], i, j, n;
    int mult = 1, soma = 0;

    srand(time(NULL));

    for(i = 0; i < 3; i++){
        for(j = 0;  j < 6; j++){
            m[i][j] = rand() % 11;
            mult *= m[i][j];
            soma += m[i][j];
        }
    } printf("\n");

    printf("Matriz resultante!\n");
     for(i = 0; i < 3; i++){
        for(j = 0; j < 6; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    printf("\nDigite um valor para se multiplicar as entradas da matriz: ");
    scanf("%d", &n);

    printf("\nMatriz multiplicada!\n");
     for(i = 0; i < 3; i++){
        for(j = 0; j < 6; j++){
            printf("%d\t", n * m[i][j]);
        }
        printf("\n");
    }
    return 0;
}