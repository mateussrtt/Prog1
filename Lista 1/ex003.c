/*
A maioria dos restaurantes cobra 10% sobre o valor do consumo do cliente para o garçom,
embora por lei não possa obrigar o cliente a pagar. Fazer um algoritmo que leia o valor gasto com as
despesas realizadas em um restaurante e imprima o valor da gorjeta e o valor total a ser pago (despesa mais
gorjeta).
*/

#include <stdio.h>

int main() {
    float gasto, gorjeta, total;
    printf ("Quanto foi gasto durante a noite no restaurante? ");
    scanf("%f", &gasto);
    gorjeta = gasto / 10;
    total = gasto + gorjeta;
    printf("A gorjeta sera de %.1f", gorjeta);
    printf("O valor total gasto sera de %.2f", total);

    return 0;
}
