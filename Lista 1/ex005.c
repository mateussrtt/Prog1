/*
Em épocas de pouco dinheiro os comerciantes procuram aumentar suas vendas oferecendo
desconto. Faça um algoritmo que possa entrar com o valor de um produto e exiba o novo valor tendo em
vista que o desconto foi de 9%.
*/

#include <stdio.h>

int main() {
    float valor, nv;
    printf("Qual o valor do produto: R$");
    scanf("%f", &valor);
    nv = valor - (valor / 100) * 9;
    printf("Com o desconto de 9%% o valor passara a ser de R$%.2f.", nv);

    return 0;
}