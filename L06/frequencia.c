#include <stdio.h>

#define INVALIDA "entrada inválida!\n"
#define GRAVE "muito grave (+)!\n"
#define AGUDO "muito agudo (-)!\n"
#define AFINADO "corda afinada!\n"
#define E_ 82.4
#define A_ 110.0
#define D_ 146.8
#define G_ 196.0
#define B_ 246.9
#define e_ 329.6

int main()
{
    char Nota;
    float afinadomax, afinadomin, amostras[100], amstr, NotaViolao, taxaErro;
    int n_amostras, OK_afinado;
    int i;
    for (;;)
    {

        scanf(" %c", &Nota);

        switch (Nota)
        {
        case 'E':
            scanf("%d", &n_amostras);
            scanf("%f", &taxaErro);
            afinadomin = 82.4 - 82.4 * (taxaErro / 100);
            afinadomax = 82.4 + 82.4 * (taxaErro / 100);
            OK_afinado = 0;
            while (!OK_afinado)
            {
                NotaViolao = 0;
                for (i = 0; i < n_amostras; i++)
                {
                    scanf("%f", &amstr);
                    amostras[i] = amstr;
                }

                for (i = 0; i < n_amostras; i++)
                {
                    if (NotaViolao < amostras[i])
                    {
                        NotaViolao = amostras[i];
                    }
                }

                if (NotaViolao > afinadomin && NotaViolao < afinadomax)
                {
                    printf(AFINADO);
                    OK_afinado = 1;
                }
                else if (NotaViolao < afinadomin)
                {
                    printf(GRAVE);
                }
                else if (NotaViolao > afinadomax)
                {
                    printf(AGUDO);
                }
            }

            break;

        case 'A':
            scanf("%d", &n_amostras);
            scanf("%f", &taxaErro);
            afinadomin = 110.0 - 110.0 * (taxaErro / 100);
            afinadomax = 110.0 + 110.0 * (taxaErro / 100);
            OK_afinado = 0;
            while (!OK_afinado)
            {
                NotaViolao = 0;
                for (i = 0; i < n_amostras; i++)
                {
                    scanf("%f", &amstr);
                    amostras[i] = amstr;
                }

                for (i = 0; i < n_amostras; i++)
                {
                    if (NotaViolao < amostras[i])
                    {
                        NotaViolao = amostras[i];
                    }
                }

                if (NotaViolao > afinadomin && NotaViolao < afinadomax)
                {
                    printf(AFINADO);
                    OK_afinado = 1;
                }
                else if (NotaViolao < afinadomin)
                {
                    printf(GRAVE);
                }
                else if (NotaViolao > afinadomax)
                {
                    printf(AGUDO);
                }
            }

            break;

        case 'D':
            scanf("%d", &n_amostras);
            scanf("%f", &taxaErro);
            afinadomin = 146.8 - 146.8 * (taxaErro / 100);
            afinadomax = 146.8 + 146.8 * (taxaErro / 100);

            OK_afinado = 0;
            while (!OK_afinado)
            {
                NotaViolao = 0;
                for (i = 0; i < n_amostras; i++)
                {
                    scanf("%f", &amstr);
                    amostras[i] = amstr;
                }

                for (i = 0; i < n_amostras; i++)
                {
                    if (NotaViolao < amostras[i])
                    {
                        NotaViolao = amostras[i];
                    }
                }

                if (NotaViolao > afinadomin && NotaViolao < afinadomax)
                {
                    printf(AFINADO);
                    OK_afinado = 1;
                }
               else if (NotaViolao < afinadomin)
                {
                    printf(GRAVE);
                }
                else if (NotaViolao > afinadomax)
                {
                    printf(AGUDO);
                }
            }

            break;

        case 'G':
            scanf("%d", &n_amostras);
            scanf("%f", &taxaErro);
            // printf("taxa: %.1f\n", taxaErro);
            afinadomin = 196.0 - (196.0 * (taxaErro / 100));
            afinadomax = 196.0 + (196.0 * (taxaErro / 100));
            // printf("min: %.1f\n", afinadomin);
            // printf("max: %.1f\n", afinadomax);
            OK_afinado = 0;
            while (!OK_afinado)
            {
                // printf("while G\n");
                NotaViolao = 0;
                for (i = 0; i < n_amostras; i++)
                {
                    scanf("%f", &amstr);
                    amostras[i] = amstr;
                }

                for (i = 0; i < n_amostras; i++)
                {
                    if (NotaViolao < amostras[i])
                    {
                        NotaViolao = amostras[i];
                    }
                }
                // printf("nota Violao %.1f\n", NotaViolao);
                if (NotaViolao > afinadomin && NotaViolao < afinadomax)
                {
                    printf(AFINADO);
                    OK_afinado = 1;
                }
                else if (NotaViolao < afinadomin)
                {
                    printf(GRAVE);
                }
                else if (NotaViolao > afinadomax)
                {
                    printf(AGUDO);
                }
            }

            break;

        case 'B':
            scanf("%d", &n_amostras);
            scanf("%f", &taxaErro);
            afinadomin = 246.9 - 246.9 * (taxaErro / 100);
            afinadomax = 246.9 + 246.9 * (taxaErro / 100);
            OK_afinado = 0;
            while (!OK_afinado)
            {
                NotaViolao = 0;
                for (i = 0; i < n_amostras; i++)
                {
                    scanf("%f", &amstr);
                    amostras[i] = amstr;
                }

                for (i = 0; i < n_amostras; i++)
                {
                    if (NotaViolao < amostras[i])
                    {
                        NotaViolao = amostras[i];
                    }
                }

                if (NotaViolao > afinadomin && NotaViolao < afinadomax)
                {
                    printf(AFINADO);
                    OK_afinado = 1;
                }
                else if (NotaViolao < afinadomin)
                {
                    printf(GRAVE);
                }
                else if (NotaViolao > afinadomax)
                {
                    printf(AGUDO);
                }
            }

            break;

        case 'e':
            scanf("%d", &n_amostras);
            scanf("%f", &taxaErro);
            afinadomin = 329.6 - 329.6 * (taxaErro / 100);
            afinadomax = 329.6 + 329.6 * (taxaErro / 100);
            OK_afinado = 0;
            while (!OK_afinado)
            {
                NotaViolao = 0;
                for (i = 0; i < n_amostras; i++)
                {
                    scanf("%f", &amstr);
                    amostras[i] = amstr;
                }

                for (i = 0; i < n_amostras; i++)
                {
                    if (NotaViolao < amostras[i])
                    {
                        NotaViolao = amostras[i];
                    }
                }

                if (NotaViolao > afinadomin && NotaViolao < afinadomax)
                {
                    printf(AFINADO);
                    OK_afinado = 1;
                }
                else if (NotaViolao < afinadomin)
                {
                    printf(GRAVE);
                }
                else if (NotaViolao > afinadomax)
                {
                    printf(AGUDO);
                }
            }

            break;

        case 'S':
            return 0;
            break;

        default:
            printf(INVALIDA);
            break;
        }
    }
    return 0;
}