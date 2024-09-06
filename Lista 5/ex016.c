/*Linguagem do P (Fácil). Crie um programa que leia uma frase inteira, insira o caractere P no
lugar de cada vogal e imprima a frase resultante ao final.*/

#include <stdio.h>

void substituirVogaisPorP(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
      
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            str[i] = 'P';
        }
        
        i++;
    }
}

int main() {
    char frase[151]; 

    printf("Digite uma frase (ate 150 caracteres): ");
    scanf("%[^\n]", frase);
  
    substituirVogaisPorP(frase);

    printf("Frase com vogais substituidas: %s\n", frase);

    return 0;
}
