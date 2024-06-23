#include <stdio.h>

#define VAZIO "  -"
#define COBRA " %2d"
#define VENCEU "Venceu!\n"
#define PERDEU "Perdeu!\n"
#define TAM 5

int main()
{
    int cobra[TAM][TAM] = {0}, tamanhoCobra = 2, MacaAtiva = 0;
    char acao;
    int i, z;
    int tempI, tempZ;
    int moved;
    int cabecaI = 2, cabecaZ = 2;

    cobra[cabecaI][cabecaZ] = 1;
    cobra[cabecaI][cabecaZ-1] = 2;

    while (1)
    {
        scanf("%c%*c", &acao);

        if (tamanhoCobra == 25)
        {
            for (i = 0; i < TAM; i++)
            {
                for (z = 0; z < TAM; z++)
                {
                    if (cobra[i][z] == 0)
                    {
                        printf(VAZIO);
                    }
                    else
                    {
                        printf(COBRA, cobra[i][z]);
                    }
                }
                printf("\n");
            }
            printf(VENCEU);
            return 0;
        }

        if (acao == 'S')
        {
            break;
        }
        else if (acao == 'M')
        {
            MacaAtiva += 1;
            continue;
        }

        else if (acao == 'C')
        {
            moved = 1;
            cabecaI = cabecaI - 1;

            if (MacaAtiva > 0)
            {
                tamanhoCobra++;
                MacaAtiva -= 1;
            }

            if (cabecaI < 0 || cobra[cabecaI][cabecaZ] != 0)
            {
                for (tempI = 0; tempI < TAM; tempI++)
                {
                    for (tempZ = 0; tempZ < TAM; tempZ++)
                    {
                        if (cobra[tempI][tempZ] == 0)
                        {
                            printf(VAZIO);
                        }
                        else
                        {
                            printf(COBRA, cobra[tempI][tempZ]);
                        }
                    }
                    printf("\n");
                }
                printf(PERDEU);

                return 0;
            }
        }
        else if (acao == 'E')
        {
            moved = 1;
            cabecaZ = cabecaZ - 1;

            if (cabecaZ < 0 || cobra[cabecaI][cabecaZ] != 0)
            {
                for (tempI = 0; tempI < TAM; tempI++)
                {
                    for (tempZ = 0; tempZ < TAM; tempZ++)
                    {
                        if (cobra[tempI][tempZ] == 0)
                        {
                            printf(VAZIO);
                        }
                        else
                        {
                            printf(COBRA, cobra[tempI][tempZ]);
                        }
                    }
                    printf("\n");
                }
                printf(PERDEU);

                return 0;
            }

            if (MacaAtiva > 0)
            {
                tamanhoCobra++;
                MacaAtiva -= 1;
            }
        }
        else if (acao == 'D')
        {
            moved = 1;
            cabecaZ = cabecaZ+1;

            if (cabecaZ >= TAM || cobra[cabecaI][cabecaZ] != 0)
            {
                for (tempI = 0; tempI < TAM; tempI++)
                {
                    for (tempZ = 0; tempZ < TAM; tempZ++)
                    {
                        if (cobra[tempI][tempZ] == 0)
                        {
                            printf(VAZIO);
                        }
                        else
                        {
                            printf(COBRA, cobra[tempI][tempZ]);
                        }
                    }
                    printf("\n");
                }
                printf(PERDEU);

                return 0;
            }

            if (MacaAtiva > 0)
            {
                tamanhoCobra++;
                MacaAtiva -= 1;
            }
        }
        else if (acao == 'B')
        {
            moved = 1;
            cabecaI = cabecaI+1;

            if (cabecaI >= TAM || cobra[cabecaI][cabecaZ] != 0)
            {
                for (tempI = 0; tempI < TAM; tempI++)
                {
                    for (tempZ = 0; tempZ < TAM; tempZ++)
                    {
                        if (cobra[tempI][tempZ] == 0)
                        {
                            printf(VAZIO);
                        }
                        else
                        {
                            printf(COBRA, cobra[tempI][tempZ]);
                        }
                    }
                    printf("\n");
                }
                printf(PERDEU);

                return 0;
            }

            if (MacaAtiva > 0)
            {
                tamanhoCobra++;
                MacaAtiva -= 1;
            }
        }

        for (i = 0; i < TAM; i++)
        {
            for (z = 0; z < TAM; z++)
            {
                if (cobra[i][z] != 0)
                {
                    cobra[i][z] += 1;

                    if (cobra[i][z] > tamanhoCobra)
                    {
                        cobra[i][z] = 0;
                    }
                }
            }
        }
        if (moved)
        {
            cobra[cabecaI][cabecaZ] = 1;
            moved = 0;
        }

        printf("\n");
        printf("\n");

        for (i = 0; i < 5; i++)
        {
            for (z = 0; z < 5; z++)
            {
                if (cobra[i][z] == 0)
                {
                    printf(VAZIO);
                }
                else
                {
                    printf(COBRA, cobra[i][z]);
                }
            }
            printf("\n");
        }

        printf("\n");
        printf("\n");
    }
    return 0;
}