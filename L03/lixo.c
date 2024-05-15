#include <stdio.h>


int main(){
    int dia;
    float hora, peso;

    scanf("%d %f %f", &dia, &hora, &peso);

    if (dia < 0  || dia > 7){
        printf("Seu Lorenzo caducou com o calor de Cuiaba, o dia nem existe!!!\n");
        exit(0);
    } else if (hora < 0  || hora > 24){
        printf("Seu Lorenzo caducou com o calor de Cuiaba, essa hora nem existe!!!\n");
        exit(0);
    } else if (peso > 100){
        printf("Seu Lorenzo caducou com o calor de Cuiaba, eh peso demais!!!\n");
        exit(0);
    } else if(peso < 0){
        printf("Seu Lorenzo caducou com o calor de Cuiaba, o peso nem existe!!!\n");
        exit(0);
    } 

    switch (dia)
    {
    case 2:
        if (hora == 8.5 && peso <= 15 || hora == 19 && peso <=30){
            printf("Deu certo!\n");
        }else{
            printf("Deu errado :(\n");
        }        
        break;
    
    case 3:
        if (hora == 16.75 && peso <=25){
            printf("Deu certo!\n");
        }else{
            printf("Deu errado :(\n");
        }        
        break;
    
    case 4:
        if (hora == 18 && peso <= 5){
            printf("Deu certo!\n");
        }else{
            printf("Deu errado :(\n");
        }        
        break;
    
    case 5:
        if (hora == 6  && peso <= 60 || hora == 21.25 && peso <= 100){
            printf("Deu certo!\n");
        }else{
            printf("Deu errado :(\n");
        }        
        break;
    
    case 6:
        if (hora == 15.5 && peso <= 20){
            printf("Deu certo!\n");
        }else{
            printf("Deu errado :(\n");
        }        
        break;
    
    
    case 7:
        if (hora == 10 && peso <= 80){
            printf("Deu certo!\n");
        }else{
            printf("Deu errado :(\n");
        }        
        break;
    
    case 1:
        if (hora == 14.5 && peso <= 50){
            printf("Deu certo!\n");
        }else{
            printf("Deu errado :(\n");
        }        
        break;
    
    default:
        printf("Seu Lorenzo caducou com o calor de Cuiaba, o dia nem existe!!!\n");
        break;
    }
    
    

}



