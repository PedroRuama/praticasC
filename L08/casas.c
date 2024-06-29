#include <stdio.h>

#define CODCASA "Codigo da casa: %d\n"

typedef int m2;
typedef int qntd;

typedef struct Casa_r
{
    int codC;
    qntd comodos;
    m2 area;
    int val;
} Casa_r;

int main()
{
    qntd casas_v;
    scanf("%d", &casas_v);
    Casa_r casa[casas_v];
   
    char filtro;
    int dado_f, codigos[casas_v], count=0;

    for (int i = 0; i < casas_v; i++)
    {
        scanf("%d %d %d %d", &casa[i].codC, &casa[i].comodos, &casa[i].area, &casa[i].val);
    }

    scanf(" %c", &filtro);

    switch (filtro)
    {
    case 'C':
        scanf("%d", &dado_f);

        for (int i = 0; i < casas_v; i++)
        {
            if (casa[i].comodos == dado_f)
            {
                codigos[count++] = casa[i].codC;
            }
        }

        break;

    case 'T':
        scanf("%d", &dado_f);

        for (int i = 0; i < casas_v; i++)
        {
            if (casa[i].area >= dado_f)
            {
                codigos[count++] = casa[i].codC;
            }
        }

        break;

    case 'P':
        scanf("%d", &dado_f);

        for (int i = 0; i < casas_v; i++)
        {
            if (casa[i].val <= dado_f)
            {
                codigos[count++] = casa[i].codC;
            }
        }

        break;

    default:
        break;
    }


    
    for (int z = 0; z < count - 1; z++) {
        for (int j = 0; j < count - 1 - z; j++) {
            if (codigos[j] > codigos[j + 1]) {
                int temp = codigos[j];
                codigos[j] = codigos[j + 1];
                codigos[j + 1] = temp;
            }
        }
    }


    for (int i = 0; i < count; i++)
    {
        printf(CODCASA, codigos[i]);
    }


    return 0;
}