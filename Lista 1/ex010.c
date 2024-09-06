/*
Crie um algoritmo que leia o valor de uma hora (hora e minutos) e informe quantos minutos
se passaram desde o início do dia até àquela hora
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
    printf("Se passaram %.2f minutos desde o inicio do dia ate esta hora.\n", total); 

    return 0;
}