/*
Crie um algoritmo para calcular o rendimento com juros simples. O usuário deverá digitar o
montante total, o período que o dinheiro renderá (em meses) e a taxa de juros mensal. O programa deverá
fazer os cálculos e exibir o total investido, o montante final e o valor total de juros obtido.
*/

#include <stdio.h>

int main() {
    float valor, juros, tempo, j, vf;
    printf("Digite o montante inicial: ");
    scanf("%f", &valor);
    printf("Digite a taxa de juros mensal: ");
    scanf("%f", &juros);
    printf("Digite o tempo que deseja aplicar seu dinheiro em meses: ");
    scanf("%f", &tempo);
    j = valor * (juros / 100) * tempo;
    vf = valor + j;
    printf("O montante final sera de %.2f e o juros total sera de %.2f reais.", vf, j);
    
    return 0;
}