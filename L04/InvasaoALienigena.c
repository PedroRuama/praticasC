#include <stdio.h>

#define INVASAO "Invasao Iminente!\n"

int main()
{

    double casosT, caracteres, i = 0, z = 0, detectorInvasao = 0, pontos = 0, exclamacao = 0, barra = 0;
    char letra_cod, p = '%';

    scanf("%lf", &casosT);

    while (z < casosT)
    {
        i = 0;
        detectorInvasao = 0;
        pontos = 0;
        exclamacao = 0;
        barra = 0;

        scanf("%lf", &caracteres);
        while (i < caracteres)
        {
            scanf(" %c", &letra_cod);

            if (letra_cod == '0')
            {
                detectorInvasao++;
                if (detectorInvasao >= 3)
                {
                    i = caracteres;
                    break;
                }
            }else{
                detectorInvasao = 0;
            }

            if (letra_cod == '!')
            {
                exclamacao++;
            }
            else if (letra_cod == '/')
            {
                barra++;
            }
            else if (letra_cod == '.')
            {
                pontos++;
            }
            i++;
        }

        exclamacao = exclamacao * 100;
        barra = barra * 100;
        pontos = pontos * 100;

        if (detectorInvasao >= 3)
        {
            printf(INVASAO);
        }
        else
        {

            printf("RELATORIO:\n");
            printf("!: %.2lf%c\n", exclamacao / caracteres, p);
            printf(".: %.2lf%c\n", pontos / caracteres, p);
            printf("/: %.2lf%c\n", barra / caracteres, p);
        }

        
        z++;
    }

    return 0;
}
