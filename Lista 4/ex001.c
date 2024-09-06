/*Codifique uma função que receba por parâmetro a idade de uma pessoa, expressa em anos,
meses e dias (todos inteiros), e retorne essa idade expressa em dias. Considere os meses como tendo 30 dias
e desconsidere anos bissextos.*/

#include <stdio.h>

int idadeEmDias(int anos, int meses, int dias){
    int total = (anos * 360) + (meses * 30) + dias;
     return total;
    }

int main(){
    int anos, meses, dias;
    printf("Digite a idade em anos: ");
    scanf("%d", &anos);
    printf("Digite a idade em meses: ");
    scanf("%d", &meses);
    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    int total = idadeEmDias(anos, meses, dias);
    printf("Sua idade expressa em dias e: %d", total);


    return 0;
}