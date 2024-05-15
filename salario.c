#include <stdio.h>

void main(){
    float sal_atual, sal_novo;

    printf("Digite o salario atual: ");
    scanf("%f", &sal_atual);

    if (sal_atual <= 1000){
        sal_novo = sal_atual * 1.2;
    }else{
        sal_novo = sal_atual * 1.1;
    }

    printf("Novo salario: %.2f\n", sal_novo);
   
}