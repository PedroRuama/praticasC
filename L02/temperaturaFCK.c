#include <stdio.h>

int main(){
    double fahren, celsius, kelvin;

    scanf("%lf", &fahren);

    celsius = (fahren-32)*5/9;
    kelvin = (fahren-32)*5/9+273.15;


    printf("%.2lf C\n", celsius);
    printf("%.2lf K\n", kelvin);


    return 0;
}