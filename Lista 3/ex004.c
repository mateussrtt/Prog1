#include <stdio.h>

int main(){
    int i, n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("%d x %d = %d\n", i, n, (i * n));
    }

    

    return 0;
}