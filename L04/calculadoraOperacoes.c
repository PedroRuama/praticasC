#include <stdio.h>
#include <math.h>

#define OP_INVALIDA "opção inválida!\n"
#define ZERO_DIV "divisão por 0!\n"

int main()
{

    int A, B, cod;

    scanf("%d", &A);
    scanf("%d", &B);

    do
    {
        
        scanf("%d", &cod);

        switch (cod)
        {
        case 1:

            printf("%d\n", A + B);
            break;
        case 2:

            printf("%d\n", A - B);
            break;
        case 3:

            printf("%d\n", B - A);
            break;
        case 4:

            printf("%d\n", B * A);
            break;
        case 5:
            if (B == 0){
                printf(ZERO_DIV);
                break;
            }
            
            printf("%.2f\n", (float)A/(float)B);
            
            break;
        
        case 6:
            if (A == 0){
                printf(ZERO_DIV);
                break;
            }
            
            printf("%.2f\n", (float)B/(float)A);
            break;

        case 7:

            printf("%d\n", A/B);
            break;
    
        case 8:

            printf("%d\n", B/A);
            break;
        case 9:

            printf("%d\n", A%B);
            break;
        case 10:

            printf("%d\n", B%A);
            break;
        case 11:
            
            printf("%.lf\n", pow(A, B));
            break;
        case 12:
            
            printf("%.lf\n", pow(B, A));
            break;

        default:
            if (cod != 0){
                printf(OP_INVALIDA);
            }
            
            break;
        }

    } while (cod != 0);

    //
    return 0;
}