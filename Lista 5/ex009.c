/*Crie uma função com cabeçalho int strichr (char str[],char c) que determina a primeira
ocorrência do caractere representado pela variável c na string representada por str. Deve ser retornada a
posição de ocorrência ou -1 caso o caractere não ocorra na string. */

#include <stdio.h>

int strichr (char str[],char c){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == c){
            return i;
        } 
    }
    return -1; 
}

int main() {
    char str[] = "Bom dia povo brasileiro";
    char c = 'o';

    int pos = strichr(str, c);

    if (pos != -1) {
        printf("O caractere '%c' ocorre pela primeira vez na posicao: %d\n", c, pos + 1);
    } else {
        printf("-1");
    }

    return 0;
}
