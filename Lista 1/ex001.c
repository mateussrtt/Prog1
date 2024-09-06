//Escrever um programa para ler um número inteiro e exibir seu sucessor e seu antecessor.

#include <stdio.h>

int main(){
    int n1, n2, n3;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    n2 = n1 + 1;
    n3 = n1 - 1;
    printf("Seu sucessor e %d e seu antecessor e %d.", n2, n3);

}
