#include <stdio.h>

int main(){
    float R, V, altura, area;

    scanf("%f", &R);
    scanf("%f", &V);
    
    V = V/1000;    
    altura = V/(3.14*R*R);

    area = 2*3.14*R*(R+altura);

    printf("%.2f\n", altura);
    printf("%.2f\n", area);

    
    return 0;

}