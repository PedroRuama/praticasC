#include <stdio.h>

int main()
{

    float soma, x=1;

    for (float y=1; y <= 50; y++){
        soma = soma + x/y;
        x = x + 2;

    }
    printf("%.2f", soma);

    return 0;
}