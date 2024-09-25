#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int m[3][4], i, j;
    int mult = 1, soma = 0;

    srand(time(NULL));

    for(i = 0; i < 3; i++){
        for(j = 0;  j < 4; j++){
            m[i][j] = rand() % 11;
            mult *= m[i][j];
            soma += m[i][j];
        }
    } printf("\n");

    printf("Matriz resultante!\n");
     for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    printf("\nA soma dos valores da matriz sera %d", soma);
    printf("\nA multiplicacao dos valores da matriz sera %d", mult);

    return 0;
}