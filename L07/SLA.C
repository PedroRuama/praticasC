#include <stdio.h>

#define VAZIO "  -"
#define COBRA " %2d"
#define VENCEU "Venceu!\n"
#define PERDEU "Perdeu!\n"
#define TAM 5

int main()
{
    int cobra[5][5] = {0}, tamanhoCobra = 2, MacaAtiva = 0;
    char acao;
    int Perdeu = 0;
    int i, z, y;
    int tempI, tempZ;
    int moved;
    cobra[2][2] = 1;
    cobra[2][3] = 2;

    while (1)
    {
        scanf("%c%*c", &acao);
        if (acao == 'S')
        {
            break;
        }
        else if (acao == 'M')
        {
            MacaAtiva = 1;
            continue;
        }

        else if (acao == 'C')
        {
            moved = 1;
            if (MacaAtiva == 1)
            {
                tamanhoCobra++;
                MacaAtiva = 0;
            }
            for (i = 0; i < 5; i++)
            {
                for (z = 0; z < 5; z++)
                {
                    if (cobra[i][z] == 1 && moved)
                    {
                        if (cobra[i - 1][z] != 0)
                        {
                            printf("bateu\n");

                            exit(0);
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
            if (MacaAtiva == 1)
            {
                tamanhoCobra++;
                MacaAtiva = 0;
            }
            for (i = 0; i < 5; i++)
            {
                for (z = 0; z < 5; z++)
                {

                    if (cobra[i][z] == 1 && moved)
                    {

                        if (cobra[i][z - 1] != 0)
                        {
                            printf("bateu\n");

                            exit(0);
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
            if (MacaAtiva == 1)
            {
                tamanhoCobra++;
                MacaAtiva = 0;
            }
            for (i = 0; i < 5; i++)
            {
                for (z = 0; z < 5; z++)
                {

                    if (cobra[i][z] == 1 && moved)
                    {
                        if (cobra[i][z + 1] != 0)
                        {
                            printf("bateu\n");

                            exit(0);
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
            if (MacaAtiva == 1)
            {
                tamanhoCobra++;
                MacaAtiva = 0;
            }
            for (i = 0; i < 5; i++)
            {
                for (z = 0; z < 5; z++)
                {
                    if (cobra[i][z] == 1 && moved)
                    {
                        if (cobra[i + 1][z] != 0)
                        {
                            printf("bateu\n");

                            exit(0);
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
        else if (acao == 'M')
        {
            MacaAtiva = 1;
        }
        else if (acao == 'S')
        {
            break;
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
}