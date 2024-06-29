#include <stdio.h>

#define turmaCompleta "Completa!\n"
#define turmaIncompleta "Incompleta! Faltam %i pet(s)\n"
#define turmaX "Turma %c: "

typedef char porte;

typedef struct
{
    int P;
    int M;
    int G;
} turma;

typedef struct
{
    char nome[15];
    int registro;
    int cad;
    porte porte;
} animal;

int main()
{
    int minCad, inscritos;
    scanf("%d %d", &minCad, &inscritos);

    animal dogs[inscritos];
    turma t = {0, 0, 0};

    int i, z;
    int pri = 0, sec = 0, ter = 0;
    char priC, secC, terC;

    for (i = 0; i < inscritos; i++)
    {

        z = 0;
        while (1)
        {
            scanf("%c", &dogs[i].nome[z]);
            if (dogs[i].nome[z] == ' ' || dogs[i].nome[z] == "\n")
            {
                break;
            }
            z++;
        }

        scanf("%d %d %c%*c", &dogs[i].registro, &dogs[i].cad, &dogs[i].porte);

        if (pri == 0 && dogs[i].cad == 1)
        {
            priC = dogs[i].porte;
            pri = 1;
        }
        else if (sec == 0 && dogs[i].cad == 1 && dogs[i].porte != priC)
        {
            secC = dogs[i].porte;
            sec = 1;
        }
        else if (ter == 0 && dogs[i].cad == 1 && dogs[i].porte != priC && dogs[i].porte != secC)
        {
            terC = dogs[i].porte;
            ter = 1;
        }

        if (dogs[i].cad == 1)
        {
            if (dogs[i].porte == 'P')
                t.P++;
            else if (dogs[i].porte == 'M')
                t.M++;
            else if (dogs[i].porte == 'G')
                t.G++;
        }
    }

    if (pri)
    {
        if ((priC == 'P' ? t.P : (priC == 'M' ? t.M : t.G)) >= minCad)
        {
            printf(turmaX turmaCompleta, priC);

            for (i = 0; i < inscritos; i++)
            {
                if (dogs[i].cad == 1 && dogs[i].porte == priC)
                {
                    printf("Nome: ");
                    z = 0;
                    while (1)
                    {
                        if (dogs[i].nome[z] != "\n")
                        {
                            
                            printf("%c", dogs[i].nome[z]);
                        }

                        if (dogs[i].nome[z] == ' ')
                        {

                            break;
                        }
                        z++;
                    }

                    printf("Registro: %d\n", dogs[i].registro);
                }
            }
        }
        else
        {
            printf(turmaX turmaIncompleta, priC, minCad - (priC == 'P' ? t.P : (priC == 'M' ? t.M : t.G)));
        }
    }
    else
    {
        printf(turmaX turmaIncompleta, 'X', minCad);
    }

    if (sec)
    {
        if ((secC == 'P' ? t.P : (secC == 'M' ? t.M : t.G)) >= minCad)
        {
            printf(turmaX turmaCompleta, secC);
            for (i = 0; i < inscritos; i++)
            {
                if (dogs[i].cad == 1 && dogs[i].porte == secC)
                {
                    printf("Nome: ");
                    z = 0;
                    while (1)
                    {
                        printf("%c", dogs[i].nome[z]);
                        if (dogs[i].nome[z] == ' ')
                        {

                            break;
                        }
                        z++;
                    }

                    printf("Registro: %d\n", dogs[i].registro);
                }
            }
        }
        else
        {
            printf(turmaX turmaIncompleta, secC, minCad - (secC == 'P' ? t.P : (secC == 'M' ? t.M : t.G)));
        }
    }
    else
    {
        printf(turmaX turmaIncompleta, 'X', minCad);
    }

    if (ter)
    {
        if ((terC == 'P' ? t.P : (terC == 'M' ? t.M : t.G)) >= minCad)
        {
            printf(turmaX turmaCompleta, terC);
            for (i = 0; i < inscritos; i++)
            {
                if (dogs[i].cad == 1 && dogs[i].porte == terC)
                {
                    printf("Nome: ");
                    z = 0;
                    while (1)
                    {
                        printf("%c", dogs[i].nome[z]);
                        if (dogs[i].nome[z] == ' ')
                        {

                            break;
                        }
                        z++;
                    }

                    printf("Registro: %d\n", dogs[i].registro);
                }
            }
        }
        else
        {
            printf(turmaX turmaIncompleta, terC, minCad - (terC == 'P' ? t.P : (terC == 'M' ? t.M : t.G)));
        }
    }
    else
    {
        printf(turmaX turmaIncompleta, 'X', minCad);
    }

    return 0;
}
