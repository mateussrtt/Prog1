/* Codifique uma função com a assinatura int somaintervalo(int n1, int n2) que retorne a soma
dos números inteiros que existem no intervalo fechado entre n1 e n2 (ou seja, incluindo n1 e n2). Caso o
valor de n2 seja menor que o de n1, a função deve tratar o intervalo como sendo de n2 até n1 sem que o
invocador da função perceba.*/

#include <stdio.h>

int somaintervalo(int n1, int n2){
    int soma = 0;

    if (n1 > n2) {
        int aux = n1;
        n1 = n2;
        n2 = aux;
    }

    for (int i = n1; i <= n2; i++) {
        soma += i;
    }
    return soma;
}

int main(){
    int num1, num2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    int resultado = somaintervalo(num1, num2);
        printf("A soma de todos os numeros inteiros de %d ate %d e: %d\n", num1, num2, resultado);

    return 0;
}