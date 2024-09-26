#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int m[4][4], i, j, maior = -999, menor = 999, pMaior[2], pMenor[2];

    srand(time(NULL));

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            m[i][j] = rand() % 11;
        }
    } printf("\n");

    printf("Matriz resultante!\n");
     for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d\t", m[i][j]);
            if(m[i][j] > maior){
                maior = m[i][j];
                pMaior[0] = i + 1;
                pMaior[1] = j + 1;
            } else if(m[i][j] < menor){
                menor = m[i][j];
                pMenor[0] = i + 1;
                pMenor[1] = j + 1;
            }
        }
        printf("\n");
    }

    printf("O maior elemento e: %d na posicao [%d][%d]\n", maior, pMaior[0], pMaior[1]);
    printf("O menor elemento e: %d na posicao [%d][%d]\n", menor, pMenor[0], pMenor[1]);

    return 0;
}