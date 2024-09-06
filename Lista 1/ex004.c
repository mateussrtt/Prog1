/*
Para vários tributos a base de calculo é o salário mínimo. Fazer um algoritmo que leia o valor do
salário mínimo e o valor do salário de uma pessoa. Calcular e exibir quantos salários mínimos essa pessoa
ganha. Obs: o salário mínimo atualmente é R$622,00
*/

#include <stdio.h>

int main() {
    float salario, ns;
    printf("Qual e o seu salario? R$");
    scanf("%f", &salario);
    ns = salario / 1412;
    printf("Voce recebe %.2f salarios minimos.", ns);

    return 0;
}