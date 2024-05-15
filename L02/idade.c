#include <stdio.h>


int main(){

    unsigned AnoNasc, AnoAtual, idade;
    double semanas;

    scanf("%u %u", &AnoNasc, &AnoAtual);

    idade = AnoAtual - AnoNasc ;

  //  semanas = idade * 52.14286;

    printf("%u\n", idade);

    semanas = 365.25 * idade;
    semanas /= 7;

    printf("%.2lf\n", semanas);

    return 0;
    
}