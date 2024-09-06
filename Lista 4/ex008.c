/*Crie uma função que exiba na tela os n (recebido por parâmetro) primeiros números da
sequência de Fibonacci. Na matemática, a Sucessão de Fibonacci (também Sequência de Fibonacci), é uma
sequência de números inteiros, começando normalmente por 0 e 1, na qual, cada termo subsequente
corresponde à soma dos dois anteriores. 0,1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233...*/

#include <stdio.h>

void fibonacci(int n) {
    if (n <= 0) {
        printf("O numero deve ser maior que 0.\n");
        return;
    } else if (n == 1) {
        printf("0\n");
        return;
    }

    int a = 0, b = 1;
    printf("%d %d ", a, b);

    for(int i = 2; i < n; i++){
       int proximo = a + b;
       printf("%d ", proximo);
       a = b;
       b = proximo;

    }
     printf("\n");
}

int main(){
    int num;

    printf("Digite o numero de termos da sequencia de Fibonacci: ");
    scanf("%d", &num);

     fibonacci(num);


    return 0;
}