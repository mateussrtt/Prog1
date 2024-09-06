/*Um palíndromo é uma palavra ou frase, que é igual quando lida da esquerda para a direita ou
da direita para a esquerda. Escreva um programa que leia uma string de até 50 caracteres, e imprima
“Palíndromo“, caso a string seja um palíndromo, e “Não Palíndromo“, caso contrário. Assuma que só são
usados caracteres minúsculos e sem acentos. Exemplos de palíndromo: ana, mussum, rodador.*/

#include <stdio.h>

void inverterString(char str[]) {
    int i, j;
    char temp;
    
    int tamanho = 0;
    while (str[tamanho] != '\0') {
        tamanho++;
    }

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        temp = str[i];      
        str[i] = str[j];   
        str[j] = temp;     
    }
}

int main() {
    char str[51]; 

    printf("Digite uma string de ate 50 caracteres (somente minuksculas e sem acentos): ");
    scanf("%50s", str);

    inverterString(str);

    printf("String invertida: %s\n", str);

    return 0;
}