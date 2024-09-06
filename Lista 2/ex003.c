/*
� Escrever um algoritmo em c para encontrar as solu��es de uma equa��o de segundo grau (duas
ra�zes). Se o delta � negativo n�o existem ra�zes reais. Se o delta � 0 existe apenas uma solu��o. Em cada um
dos casos deve ser informado ao usu�rio se existe raiz (uma ou duas) ou se n�o existe e as ra�zes devem ser
exibidas. Lembre-se de utilizar a f�rmula de Bh�skara abaixo.
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
