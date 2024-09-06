/*Use a função da questão anterior e lance o dado 1 milhão de vezes. Conte quantas vezes cada
número saiu e exiba a porcentagem de cada um.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
    return (rand() % 6) + 1;
}

int main() {
    int contagem1 = 0;
    int contagem2 = 0;
    int contagem3 = 0;
    int contagem4 = 0;
    int contagem5 = 0;
    int contagem6 = 0;

    srand(time(NULL));

    for (int i = 0; i < 1000000; i++) {
        int resultado = dado();
        switch (resultado) {
            case 1: contagem1++; 
             break;
            case 2: contagem2++; 
             break;
            case 3: contagem3++; 
             break;
            case 4: contagem4++; 
             break;
            case 5: contagem5++; 
             break;
            case 6: contagem6++; 
             break;
        }
    }

    
    printf("Porcentagem de cada numero em 1 milhão de lançamentos:\n");
    printf("Numero 1: %d vezes, %.2f\n", contagem1, (contagem1 / 1000000.0) * 100);
    printf("Numero 2: %d vezes, %.2f\n", contagem2, (contagem2 / 1000000.0) * 100);
    printf("Numero 3: %d vezes, %.2f\n", contagem3, (contagem3 / 1000000.0) * 100);
    printf("Numero 4: %d vezes, %.2f\n", contagem4, (contagem4 / 1000000.0) * 100);
    printf("Numero 5: %d vezes, %.2f\n", contagem5, (contagem5 / 1000000.0) * 100);
    printf("Numero 6: %d vezes, %.2f\n", contagem6, (contagem6 / 1000000.0) * 100);

    return 0;
}