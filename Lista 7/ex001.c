#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 50;
    int b = 75;

    if (&a > &b) {
        printf("O maior endereco de memoria e de 'a': %p\n", &a);
    } else {
        printf("O maior endereco de memoria e de 'b': %p", &b);
    }

    return 0;
}