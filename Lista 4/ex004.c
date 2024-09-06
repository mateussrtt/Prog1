/*Codifique uma função que receba a média final de um aluno passado por parâmetro e retorne
o seu conceito (através de uma variável char), conforme a tabela a abaixo. Crie um método main que solicite
ao usuário que digite uma nova nota enquanto quiser continuar.*/

#include <stdio.h>

char calcular_media(float media){
    if (media >= 90 && media <= 100) {
        return 'A';
    } else if (media >= 70 && media < 89) {
        return 'B';
    } else if (media >= 50 && media < 69) {
        return 'C';
    } else if (media >= 0 && media < 49) {
        return 'D';
    } else {
        return 'X';
    }
}

int main(){
    float media;
    char continua;
    
    do {
        printf("Digite a media final do aluno: ");
        scanf("%f", &media);

        char media_final = calcular_media(media);

    
        if (media_final == 'X') {
            printf("Media invalida. Digite uma media entre 0.0 e 10.0.\n");
        } else {
            printf("A media do aluno e: %c\n", media_final);
        }

        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continua); 

    } while (continua == 's' || continua == 'S');



    return 0;
}