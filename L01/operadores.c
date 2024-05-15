#include <stdio.h>

int main(){

    int A, B;

    scanf("%d", &A);
    scanf("%d", &B);
    float AF=A, BF=B;

    //1
    int Soma = A + B;
    printf("%d\n", Soma);
    //2
    int Sub = A - B;
    printf("%d\n", Sub);
    //3
    int Sub2 = B - A;
    printf("%d\n", Sub2);
    //4
    int multi = A * B;
    printf("%d\n", multi);

    //5
    float div = AF/BF;
    printf("%.2f\n", div);
    //6
    float div2 = BF/AF;
    printf("%.2f\n", div2);
    //7
    int divInt = A/B;
    printf("%d\n", divInt);
    //8
    int divInt2 = B/A;
    printf("%d\n", divInt2);
    //9
    int resto = A%B;
    printf("%d\n", resto);
    //10
    int resto2 = B%A;
    printf("%d\n", resto2);
    //11
    float AllSoma = Soma+Sub2+Sub+multi+div+div2+divInt+divInt2+resto2+resto;
    printf("%.2f\n", AllSoma);

    return 0;
}