/*
Agora construa um algoritmo que faça o caminho inverso. Leia um valor em graus Fahrenheit e
converta para graus centígrados.
*/

#include <stdio.h>

int main() {
    float c, f;
    printf("Qual a temperatura em graus fahrenheit? ");
    scanf("%f", &f);
    c = (f - 32) * 5/9;
    printf("A temperatura em celsius sera de: %.2f", c);

    return 0;
}