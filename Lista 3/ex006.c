#include <stdio.h>

int main(){
    int idade;
    float peso, soma = 0;
    char continuar = 's';
    
    while(continuar == 's'){
        printf("Digite a sua idade: ");
        scanf("%d", &idade);

        if(idade > 30){
            printf("Digite o seu peso: ");
            scanf("%f", &peso);

            soma += peso;
        }

        printf("Deseja continuar? (s/n):");
        scanf("%s", &continuar);
    }

     printf("A soma dos pesos das pessoas com mais de 30 anos e: %.2f", soma);

    return 0;
}