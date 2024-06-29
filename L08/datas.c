#include <stdio.h>

typedef struct
{
    int dia; 
    int mes;
    int ano;
} Datas;

int main()
{
    int acao, dado;

    Datas data;
    
    data.dia = 1;
    data.mes = 1;
    data.ano = 1;

    while (1)
    {

        


        scanf("%d", &acao);

        switch (acao)
        {
        case 1:
            scanf("%d", &dado);
            
            if (dado > 31 || dado < 1 || data.ano%4 != 0 && dado > 28 && data.ano != 1)
            {
                printf("Dia invalido\n");
            }
            else
            {

                data.dia = dado;
            }

            break;

        case 2:
            scanf("%d", &dado);
             if (dado > 12 || dado < 1 || data.ano%4 != 0 && dado == 2 && data.dia == 29)
            {
                printf("Mes invalido\n");
            }else if (dado == 4 && data.dia == 31 || dado == 6 && data.dia == 31 || dado == 9 && data.dia == 31 || dado == 11 && data.dia == 31)
            {
                printf("Mes invalido\n");
                
            }
            else
            {
                data.mes = dado;
            }
            break;
        case 3:
            scanf("%d", &dado);
             if (dado < 0 || dado%4 != 0 && data.dia == 29){
                printf("Ano invalido\n");
            }
            else
            {
                data.ano = dado;
            }
            break;
        case 4:
            printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
            break;
        case -1:
            return 0;
            break;

        default:
            break;
        }
    }

    return 0;
}
