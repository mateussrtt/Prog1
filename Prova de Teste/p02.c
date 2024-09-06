#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    media = (n1 + n2 + n3) / 3;
    if(media >= 7){
        printf("Aprovado\n\n");
    } if(media >= 6 && media < 7){
        printf("Exame Especial\n\n");
    } if(media < 6){
        printf("Reprovado\n\n");
    }
    printf("Sua media sera %.2f", media);

    return 0;
}
