#include <stdio.h>

int main(){

    int ouro, bonecos = 0, numero1, numero2, numero3, numero4, numero5;

    scanf("%d", &ouro);
    scanf("%d", &numero1);
    scanf("%d", &numero2);
    scanf("%d", &numero3);
    scanf("%d", &numero4);
    scanf("%d", &numero5);

    if (numero1 == 1)    {
        if (ouro-2 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 2;  
            printf("Rakan (2 ouros)\n");
            bonecos += 1;
        }
        
    } 
    else if (numero1 == 2){
        if (ouro-5 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            printf("Nunu (5 ouros)\n");
            bonecos += 1;
        }
                ouro -= 5;
        
    }
    else if (numero1 == 3){
        if (ouro-1 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 1;
            printf("Annie (1 ouro)\n");
            bonecos += 1;
        }
        
    }
    else if (numero1 == 4){
        if (ouro-4 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 4;
            printf("Lux (4 ouros)\n");
            bonecos += 1;
        }
        
    }
    else if (numero1 == 5){
        if (ouro-3 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 3;
            printf("Lucian (3 ouros)\n");
            bonecos += 1;
        }
        
    }
    else if (numero1 == 6){
       printf("Sair\n");
       printf("Voce tem %d de ouro e %d bonecos em campo.\n", ouro, bonecos);
       exit(0);
    }else{
         printf("Erro\n");
    }



    
    if (numero2 == 1)    {
        if (ouro-2 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 2;
            printf("Rakan (2 ouros)\n");
            bonecos += 1;
        }
        
    } 
    else if (numero2 == 2){
        if (ouro-5 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 5;
            printf("Nunu (5 ouros)\n");
            bonecos += 1;
        }
        
    }
    else if (numero2 == 3){
        if (ouro-1 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 1;
            printf("Annie (1 ouro)\n");
            bonecos += 1;
        }
        
    }
    else if (numero2 == 4){
        if (ouro-1 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 1;
            printf("Zed (1 ouro)\n");
            bonecos += 1;
        }
        
    }
    else if (numero2 == 5){
        if (ouro-3 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 3;
            printf("Lucian (3 ouros)\n");
            bonecos += 1;
        }
        
    }
    else if (numero2 == 6){
       printf("Sair\n");
       printf("Voce tem %d de ouro e %d bonecos em campo.\n", ouro, bonecos);
       exit(0);
    }
    else{
         printf("Erro\n");
    }
        
    
    if (numero3 == 1)    {
        if (ouro-2 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 2;
            printf("Rakan (2 ouros)\n");
            bonecos += 1;
        }
        
    } 
    else if (numero3 == 2){
        if (ouro-5 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 5;
            printf("Nunu (5 ouros)\n");
            bonecos += 1;
        }
        
    }
    else if (numero3 == 3){
        if (ouro < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 0;
            printf("Yuumi (0 ouro)\n");
            bonecos += 1;
        }
        
    }
    else if (numero3 == 4){
        if (ouro-1 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 1;
            printf("Zed (1 ouro)\n");
            bonecos += 1;
        }
        
    }
    else if (numero3 == 5){
        if (ouro-3 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 3;
            printf("Lucian (3 ouros)\n");
            bonecos += 1;
        }
        
    }
    else if (numero3 == 6){
       printf("Sair\n");
       printf("Voce tem %d de ouro e %d bonecos em campo.\n", ouro, bonecos);
       exit(0);
    }
    else{
         printf("Erro\n");
    }
        
        
    
    
    if (numero4 == 1)    {
        if (ouro-2 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 2;
            printf("Yasuo (2 ouros)\n");
            bonecos += 1;
        }
        
    } 
    else if (numero4 == 2){
        if (ouro-5 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 5;
            printf("Nunu (5 ouros)\n");
            bonecos += 1;
        }
        
    }
    else if (numero4 == 3){
        if (ouro < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 0;
            printf("Yuumi (0 ouro)\n");
            bonecos += 1;
        }
        
    }
    else if (numero4 == 4){
        if (ouro-1 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 1;
            printf("Zed (1 ouro)\n");
            bonecos += 1;
        }
        
    }
    else if (numero4 == 5){
        if (ouro-3 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 3;
            printf("Lucian (3 ouros)\n");
            bonecos += 1;
        }
        
    }
    else if (numero4 == 6){
       printf("Sair\n");
       printf("Voce tem %d de ouro e %d bonecos em campo.\n", ouro, bonecos);
       exit(0);
    }
    else{
         printf("Erro\n");
    }
        
        
        

    
    if (numero5 == 1)    {
        if (ouro-2 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 2;
            printf("Yasuo (2 ouros)\n");
            bonecos += 1;
        }
        
    } 
    else if (numero5 == 2){
        if (ouro-1 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 1;
            printf("Amumu\n");
            bonecos += 1;
        }
        
    }
    else if (numero5 == 3){
        if (ouro < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 0;
            printf("Yuumi (0 ouro)\n");
            bonecos += 1;
        }
        
    }
    else if (numero5 == 4){
        if (ouro-1 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 1;
            printf("Zed (1 ouro)\n");
            bonecos += 1;
        }
        
    }


    
    else if (numero5 == 5){
        if (ouro-3 < 0){
            printf("O ouro acabou!!!\n");
        }else{
            ouro -= 3;
            printf("Lucian (3 ouros)\n");
            bonecos += 1;
        }
        
    }
    else if (numero5 == 6){
       printf("Sair\n");
       printf("Voce tem %d de ouro e %d bonecos em campo.\n", ouro, bonecos);
       exit(0);
    }
    else{
         printf("Erro\n");
    }
        
    printf("Voce tem %d de ouro e %d bonecos em campo.\n", ouro, bonecos);
    


    return 0;
}