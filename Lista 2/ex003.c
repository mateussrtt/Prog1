/*
– Escrever um algoritmo em c para encontrar as soluções de uma equação de segundo grau (duas
raízes). Se o delta é negativo não existem raízes reais. Se o delta é 0 existe apenas uma solução. Em cada um
dos casos deve ser informado ao usuário se existe raiz (uma ou duas) ou se não existe e as raízes devem ser
exibidas. Lembre-se de utilizar a fórmula de Bháskara abaixo.
*/

#include <stdio.h>
#include <math.h>

int main(){
	 float a,b,c, delta, ra1,ra2;
     printf("Digite o valor de a: ");
	 scanf("%f", &a);
	 printf("Digite o valor de b: ");
	 scanf("%f", &b);
	 printf("Digite o valor de c: ");
	 scanf("%f", &c);

	 delta = (b * b) - (4 * a * c);
	 ra1 = ((-b) + (sqrt(delta))) / (2 * a);
	 ra2 = ((-b) - (sqrt(delta))) / (2 * a);


	 if (delta < 0 || a == 0 || b == 0 || c == 0)
	 {
	 	  printf("Impossivel calcular\n");
	 } else
	 {
		  printf("R1 = %.2f\n", ra1);
		  printf("R2 = %.2f\n", ra2);
	 }

	return 0;
}
