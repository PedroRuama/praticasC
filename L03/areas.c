#include <stdio.h>

int main(){
    char forma;
    double diametro, base, altura, lado, area, D, d, BaseM;
    scanf("%c", &forma);

    switch (forma){
    case 'C':
        scanf("%lf", &diametro);
        diametro /= 2;
        area = 3.14*(diametro*diametro);
        printf("%.2f", area);
        break;
    case 'R':
        scanf("%lf", &base);
        scanf("%lf", &altura);
        area = base*altura;
        printf("%.2f", area);

        break;
    case 'Q':
        scanf("%lf", &base);
        area = base*base;
        printf("%.2f", area);
        break;
    case 'L':
        scanf("%lf", &D);
        scanf("%lf", &d);
        area = (D*d)/2;
        printf("%.2f", area);
        break;
    case 'T':
        scanf("%lf", &base);
        scanf("%lf", &BaseM);
        scanf("%lf", &altura);
        area = (base+BaseM)*altura/2;
        printf("%.2f", area);
        break;
    default:
        break;
    }


    return 0;
}