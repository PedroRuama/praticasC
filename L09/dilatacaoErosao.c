#include <stdio.h>
#define MAX 15

void imprime(int caixa[MAX][MAX], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", caixa[i][j]);
        }
        printf("\n");
    }
}

void dilatacao(int caixa[MAX][MAX], int caixaFinal[MAX][MAX], int N)
{
    int padrao[3][3] = {{0, 1, 0}, {1, 1, 1}, {0, 1, 0}};
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (caixa[i][j] == 1)
            {
                for (int pi = 0; pi < 3; pi++)
                {
                    for (int pj = 0; pj < 3; pj++)
                    {
                        int ni = i + pi - 1;
                        int nj = j + pj - 1;
                        if (ni >= 0 && ni < N && nj >= 0 && nj < N && padrao[pi][pj] == 1)
                        {
                            caixaFinal[ni][nj] = 1;
                        }
                    }
                }
            }
        }
    }
}

void erosao(int caixa[MAX][MAX], int caixaFinal[MAX][MAX], int N)
{
    int padrao[3][3] = {{0, 1, 0}, {1, 1, 1}, {0, 1, 0}};
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (caixa[i][j] == 1)
            {
                int erode = 1;
                for (int pi = 0; pi < 3; pi++)
                {
                    for (int pj = 0; pj < 3; pj++)
                    {
                        int ni = i + pi - 1;
                        int nj = j + pj - 1;
                        if (ni >= 0 && ni < N && nj >= 0 && nj < N)
                        {
                            if (padrao[pi][pj] == 1 && caixa[ni][nj] == 0)
                            {
                                erode = 0;
                            }
                        }
                        else if (padrao[pi][pj] == 1)
                        {
                            erode = 0;
                        }
                    }
                }
                caixaFinal[i][j] = erode;
            }
        }
    }
}

int main(void)
{
    int N, operacao;
    int caixa[MAX][MAX] = {0};
    int caixaDilatada[MAX][MAX] = {0};
    int caixaErodida[MAX][MAX] = {0};

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &caixa[i][j]);
        }
    }
    scanf("%d", &operacao);

    if (operacao == 1 || operacao == 3)
    {
        dilatacao(caixa, caixaDilatada, N);
        if (operacao == 1)
        {
            imprime(caixaDilatada, N);
        }
    }

    if (operacao == 2)
    {
        erosao(caixa, caixaErodida, N);
        imprime(caixaErodida, N);
    }

    if (operacao == 3)
    {
        dilatacao(caixa, caixaDilatada, N);
        imprime(caixaDilatada, N);
        printf("\n");
        erosao(caixa, caixaErodida, N);
        imprime(caixaErodida, N);
    }

    return 0;
}
