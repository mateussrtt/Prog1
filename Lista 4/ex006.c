/*Codifique uma função com a assinatura int contaimpar(int n1, int n2) que retorne o número de
inteiros impares que existem entre n1 e n2 (inclusive ambos, se for o caso). Caso o valor de n2 seja menor
que o de n1, a função deve tratar o intervalo como sendo de n2 até n1 sem que o invocador da função
perceba.*/

#include <stdio.h>

int contaimpar(int n1, int n2) {
    int count = 0;

    if (n1 > n2) {
        int aux = n1;
        n1 = n2;
        n2 = aux;
    }

    for (int i = n1; i <= n2; i++) {
        if (i % 2 != 0) {
            count++;
        }
    }

    return count;
}

int main(){
    int num1, num2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    int total = contaimpar(num1, num2);
    printf("Existem %d numeros impares entre %d e %d.\n", total, num1, num2);

    return 0;   
}

