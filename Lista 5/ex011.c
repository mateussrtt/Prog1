/*Faça uma nova função palindromo que também reconheça como palíndromo frases que
podem ser lidas igualmente da esquerda para a direita ou da direita para a esquerda, desconsiderando-se os
espaços em branco. Por exemplo, as frases “a sacada da casa” e “socorram me subi no onibus em marrocos”
também devem ser reconhecidas como palíndromos.*/

#include <stdio.h>

int palindromo(const char str[]) {
    char temp[101]; 
    int i, j, k;

    k = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            temp[k++] = str[i];
        }
    }
    temp[k] = '\0'; 

    for (i = 0, j = k - 1; i < j; i++, j--) {
        if (temp[i] != temp[j]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char frase[101];


    printf("Digite uma frase (ate 100 caracteres): ");
    scanf(" %[^\n]", frase);

    if (palindromo(frase)) {
        printf("A frase e um palindromo\n");
    } else {
        printf("A frase nao e um palindromo\n");
    }

    return 0;
}