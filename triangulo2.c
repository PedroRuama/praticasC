#include <stdio.h>

int main()
{
    double Px, Py, Qx, Qy, Rx, Ry, Det, Retax, Retay, Area;

    scanf("%lf %lf %lf %lf", &Px, &Py, &Qx, &Qy);

    Rx = Qx;
    Ry = Py;

    Retax = Rx - Px;

    Retay = Ry - Py;
    Area = (Retax * Retay) / 2;

    printf("A area do triangulo eh %0.3lf.\n", Area);

    return 0;
}