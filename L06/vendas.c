#include <stdio.h>


#define NENHUMAOCORRENCIA "O PRODUTO %d NAO FOI VENDIDO NO DIA\n"
#define OCORRENCIA "O PRODUTO %d FOI VENDIDO %d VEZES NO DIA\n"
int main()
{
    int produtosV, numP[1000], consulta, xvezes;

    scanf("%d", &produtosV);

    int i;
    for (i = 0; i < produtosV; i++)
    {
        scanf("%d", &numP[i]);
    }

    while(1){
        xvezes = 0;
        scanf("%d", &consulta);
        
        if (consulta <0)
        {
            break;
        }
        
        for (i = 0; i < produtosV; i++)
        {
           if (consulta == numP[i])
           {
                xvezes++;
           }
           
        }
        if (xvezes>0)
        {
            printf(OCORRENCIA, consulta, xvezes);
        }else
        {
            printf(NENHUMAOCORRENCIA, consulta);
        }
        
        

    }

    return 0;
}