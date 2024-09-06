/*
Criar um algoritmo que leia uma temperatura em graus centígrados e apresente-a convertida
em graus Fahrenheit.
*/

#include <stdio.h>

int main() {
    float c, f;
    printf("Qual a temperatura em graus celsius? ");
    scanf("%f", &c);
    f = (c * 9 + 160) / 5;
    printf("A tempetaura em fahrenheit sera de: %.2f", f);

    return 0;
}