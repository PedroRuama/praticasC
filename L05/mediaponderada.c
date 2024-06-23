#include <stdio.h>


int main(){
    int qntdNotas, peso;
    double nota, notaPonderada, media, total =0, pesoT=0, dif;
    scanf("%d", &qntdNotas);

    int i;
    for (i = 0; i < qntdNotas; i++){
        scanf("%lf %d", &nota, &peso);
        notaPonderada = nota*peso;
        pesoT += peso;
        total += notaPonderada;
    }


    printf("%.2lf", total/pesoT);

    return 0;
}