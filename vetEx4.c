#include <stdio.h>

int main() {
    int qntd[10];
    float totprvend = 0;
    float valuni[10], fatotal = 0.0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &qntd[i]);
        totprvend += qntd[i];
    }

    for (int i = 0; i < 10; i++) {
        scanf("%f", &valuni[i]);
        fatotal += qntd[i] * valuni[i];
    }

    printf("o lucro foi de %.3f e a quantidade de produtos vendidos foi de %.f\n", fatotal, totprvend);
    
    return 0;
}