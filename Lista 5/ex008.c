/*Codifique um programa que leia e armazene a matrícula (um número inteiro) e o salário de 5
funcionários utilizando vetores. Os funcionários cuja matrícula for um número par devem receber um
aumento de 15%; já os funcionários cuja matrícula for um número ímpar, devem receber um aumento de
20%. Utilize procedimentos para ler os salários, aplicar o reajuste salárial e imprimir as informações, no
seguinte formato:
Funcionario 1
matricula : 2784
salario base : R$ 7 8 6 0 . 5 0
percentual de aumento : 15
salario corrigido : R$ 9 0 3 9 . 5 7*/

#include <stdio.h>

void ler_salarios(int matriculas[], float salarios[]) {
    for(int i = 0; i < 5; i++) {
        printf("Digite a matricula do funcionario %d: ", i + 1);
        scanf("%d", &matriculas[i]);
        printf("Digite o salario base do funcionario %d: ", i + 1);
        scanf("%f", &salarios[i]);
    }
}

void aplicar_reajuste(int matriculas[], float salarios[]){

    for(int i = 0; i < 5; i++) {
        if(matriculas[i] % 2 == 0) {
            salarios[i] = salarios[i] * 1.15;
        } else {
            salarios[i] = salarios[i] * 1.20;
        }
    }

}

void imprimir_informacoes(int matriculas[], float salarios[]){
    for(int i = 0; i < 5; i++){
        printf("\nFuncionario %d\n", i + 1);
        printf("matricula : %d\n", matriculas[i]);

        float salario_base;
        if(matriculas[i] % 2 == 0) {
            salario_base = salarios[i] / 1.15; 
        } else {
            salario_base = salarios[i] / 1.20;
        }

        printf("salario base : R$ %.2f\n", salario_base);

        int percentual_aumento;
        if(matriculas[i] % 2 == 0) {
            percentual_aumento = 15;
        } else {
            percentual_aumento = 20;
        }
        
        printf("percentual de aumento : %d\n", percentual_aumento);
        printf("salario corrigido : R$ %.2f\n", salarios[i]);
        printf("\n");

    }

}

int main(){
    int matriculas[5];
    float salarios[5];

    ler_salarios(matriculas, salarios);
    
    aplicar_reajuste(matriculas, salarios);
    
    imprimir_informacoes(matriculas, salarios);

    return 0;
}