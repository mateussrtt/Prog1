/*
Crie um algoritmo que leia o valor de uma hora (hora e minutos) e informe quantos minutos
se passaram desde o início do dia até àquela hora.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a = 1.5, b = 4, c = 2, d = 3, e = 1.2, f = 4.3, p, s, t, q, delta;
    p = (a * (c + d)) / (b * (e + f));
    s = ((pow(a, b + c)) / (e + f)) + d;
    t = (a + (((c + d) * (c + d)) / (b * b)) * d) * (1 / c);
    delta = (b * b) - (4 * a * c);
    q = ( (-b) + (sqrt(delta)) ) / (2 * a);
    printf("A primeira expressao vale %.2f\n", p);
    printf("A segunda expressao vale %.2f\n", s);
    printf("A terceira expressao vale %.2f\n", t);
    printf("A quarta expressao vale %.2f\n", q);



    return 0;
}
