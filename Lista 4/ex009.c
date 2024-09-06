/*Crie uma função em linguagem C chamado dado() que retorna, através de sorteio, um
número inteiro de 1 até 6. Para gerar um número aleatório use a função rand como abaixo (para usar a
função rand é preciso incluir a biblioteca stdlib.h)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado(){
    return (rand() % 6) + 1;
}

int main(){
    
    srand(time(NULL));

        printf("O valor sorteado no dado foi: %d\n", dado());

     return 0;
}