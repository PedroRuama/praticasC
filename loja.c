#include <stdio.h>


int main(){ 
   
 int CV,CP,val;
 char op;

 for (int count = 1; count <= 6; count++){

    printf("\nSistema de compras, de ate 6 transacoes, vc esta na transacao numero: %d.", count);
    printf("\n Digite V para compras a vista e P para compras a prazo: ");
    scanf("%c", &op);
    
    if (op == 'V')    {
        printf ("\n"); 
        printf ("COMPRA A VISTA\n"); 
        printf ("numero da compra efetuada: %d \n", count); 
        printf ("Digite o valor da compra a vista: "); 
        scanf("%d", &val);
        CV = CV + val; 
        printf ("\n"); 
    } else if (op == 'P'){
        printf ("\n"); 
        printf ("COMPRA A PRAZO\n"); 
        printf ("numero da compra efetuada: %d \n", count); 
        printf ("Digite o valor da compra a prazo: "); 
        scanf("%d", &val);
        CP = CP + val; 
        printf ("\n"); 
    }
    

    // switch(op){
    //     case 'V':
    //         printf ("\n"); 
    //         printf ("COMPRA A VISTA\n"); 
    //         printf ("numero da compra efetuada: %d \n", count); 
    //         printf ("Digite o valor da compra a vista: "); 
    //         scanf("%d", &val);
    //         CV = CV + val; 
    //         printf ("\n"); 
    //     break;
        
    //     case 'P':
    //         printf ("\n"); 
    //         printf ("COMPRA A PRAZO\n"); 
    //         printf ("numero da compra efetuada: %d \n", count); 
    //         printf ("Digite o valor da compra a prazo: "); 
//         scanf("%d", &val);
    //         CP = CP + val; 
    //         printf ("\n"); 
    //     break;

    //     default:
        
    //     break;
    // }
 }
 
  printf("Compras a vista --- %d \nCompras parceladas--- %d \n Valor total --- %d \n", CV, CP, CV+CP ); 



    return 0;
}
