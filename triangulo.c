#include <stdio.h> 

int main(){
    double Px, Py, Qx, Qy, Rx, Ry, Det;

    scanf("%lf %lf %lf %lf %lf %lf", &Px, &Py, &Qx, &Qy, &Rx, &Ry);

    Det = (Px*Qy + Py*Rx + Qx*Ry - Qy*Rx - Px*Ry - Py*Qx)/2;


    if (Det < 0){ // invertendo para positivo (area)
        Det = Det*(-1);
    }

    if (Det == 0){
        printf("Nao ha triangulo pois os pontos sao colineares.\n");

    } else{ printf("A area do triangulo eh %0.3lf.\n", Det);}
    
    
    return 0;
}