#include <stdio.h>

int main() {

int n, soma = 0;

printf ("Digite um valor: ");

scanf("%d", &n);

for(int i = 1; i <= n; i++) {

soma+=i;

}

printf("Soma de 0 ate %d: %d\n", n,soma);

return 0;

}
