#include <stdio.h>

int main(){
    double nBairros, tamArea, vCustos, maiorCusto=0, digito, custoT = 1;
    int i, z;
    scanf("%lf %lf\n", &nBairros, &tamArea);
    scanf("%lf", &vCustos);

    while (nBairros >= tamArea){
        z = vCustos;
        i = tamArea;
        while (i > 0)
        {
            digito = z % 10; 
            custoT *= digito;
            z = z / 10;  
            i--;

        }
   
        
        if (maiorCusto < custoT){
            maiorCusto = custoT;
        }
        
        vCustos = vCustos/10;
        custoT = 1;
        nBairros--;
    }
    

    printf("%.lf", maiorCusto);




    return 0;
}