/*
Considerando os seguintes valores para as variáveis a = 1.5, b = 4, c = 2, d = 3, e = 1.2 e f = 4.3,
faça um programa que determine e exiba os valores das seguintes expressões:
*/

#include <stdio.h>

int main() {
    float hora, minuto, minutos, total;
    printf("Qual a hora atual (0 a 23): ");
    scanf("%f",&hora);
    printf("Quantos minutos se passaram na hora atual: ");
    scanf("%f",&minutos);
    minuto = (hora * 60);
    total = minuto + minutos;
    printf("Se passaram %.2f minutos desde o inicido dia ate esta hora.\n", total);

    return 0;
}o
