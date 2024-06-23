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
    cobra[2][2] = 1;
    cobra[2][1] = 2;

    while (1)
    {
        scanf("%c%*c", &acao);
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
            if (MacaAtiva > 0)
            {
                tamanhoCobra++;
                MacaAtiva -= 1;
            }
            for (i = 0; i < TAM; i++)
            {
                for (z = 0; z < TAM; z++)
                {
                    if (cobra[i][z] == 1 && moved)
                    {
                        if (i - 1 < 0 || cobra[i - 1][z] != 0)
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
                        else
                        {
                            cobra[i - 1][z] = 1;
                            cobra[i][z] = 2;
                            moved = 0;
                        }
                    }
                    else if (cobra[i][z] != 0 && cobra[i][z] != 1)
                    {
                        cobra[i][z] += 1;

                        if (cobra[i][z] > tamanhoCobra)
                        {
                            cobra[i][z] = 0;
                        }
                    }
                }
            }
        }
        else if (acao == 'E')
        {
            moved = 1;
            if (MacaAtiva > 0)
            {
                tamanhoCobra++;
                MacaAtiva -= 1;
            }
            for (i = 0; i < TAM; i++)
            {
                for (z = 0; z < TAM; z++)
                {

                    if (cobra[i][z] == 1 && moved)
                    {

                        if (z - 1 < 0 || cobra[i][z - 1] != 0)
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
                        else
                        {
                            cobra[i][z - 1] = 1;
                            cobra[i][z] = 2;
                            moved = 0;
                        }
                    }
                    else if (cobra[i][z] != 0 && cobra[i][z] != 1)
                    {
                        cobra[i][z] += 1;

                        if (cobra[i][z] > tamanhoCobra)
                        {
                            cobra[i][z] = 0;
                        }
                    }
                }
            }
        }
        else if (acao == 'D')
        {
            moved = 1;
            if (MacaAtiva > 0)
            {
                tamanhoCobra++;
                MacaAtiva -= 1;
            }

            for (i = 0; i < TAM; i++)
            {
                for (z = 0; z < TAM; z++)
                {

                    if (cobra[i][z] == 1 && moved)
                    {
                        if (z + 1 >= TAM || cobra[i][z + 1] != 0)
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
                        else
                        {
                            cobra[i][z + 1] = 1;
                            cobra[i][z] = 2;
                            moved = 0;
                        }
                    }
                    else if (cobra[i][z] != 0 && cobra[i][z] != 1)
                    {
                        cobra[i][z] += 1;

                        if (cobra[i][z] > tamanhoCobra)
                        {
                            cobra[i][z] = 0;
                        }
                    }
                }
            }
        }
        else if (acao == 'B')
        {
            moved = 1;
            if (MacaAtiva > 0)
            {
                tamanhoCobra++;
                MacaAtiva -= 1;
            }
            for (i = 0; i < TAM; i++)
            {
                for (z = 0; z < TAM; z++)
                {
                    if (cobra[i][z] == 1 && moved)
                    {
                        if (i + 1 >= TAM || cobra[i + 1][z] != 0)
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
                        else
                        {
                            cobra[i + 1][z] = 1;
                            cobra[i][z] = 2;
                            moved = 0;
                        }
                    }
                    else if (cobra[i][z] != 0 && cobra[i][z] != 1)
                    {
                        cobra[i][z] += 1;

                        if (cobra[i][z] > tamanhoCobra)
                        {
                            cobra[i][z] = 0;
                        }
                    }
                }
            }
        }
        else if (tamanhoCobra == 25)
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