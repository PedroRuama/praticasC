/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Exercicio - Escalada Perigosa
 *
 *  Instruções
 *  ----------
 *
 *    Este arquivo contém o código que auxiliará no desenvolvimento do
 *    exercício. Você precisará completar as partes requisitadas.
 *
 * ================================================================== */

/// ---- ATENCAO: NAO ALTERAR DAQUI ---->

#include <stdio.h>

/* A funcao caminho vai verificar se existe algum jeito de descer a montanha
   e chegar ao chao dado um ponto inicial e seguindo as regras especificadas
   no exercício, deve retornar 1 se houver caminho e 0 se não houver.
   Se houver caminho, armazena as coordenadas em posSaida */


int caminho(int linha, int coluna, int mapa[9][9], int visitado[9][9], int posSaida[2]);
int isValidMove(int linha, int coluna, int alturaAtual, int mapa[9][9], int visitado[9][9]);

int main()
{
    int mapa[9][9] = {0};
    int linha = 0, coluna = 0;
    int posSaida[2] = {0};
    int visitado[9][9] = {0};

    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            scanf("%d", &mapa[i][j]);

    scanf("%d %d", &linha, &coluna);

    if (caminho(linha, coluna, mapa, visitado, posSaida))
        printf("Existe um caminho seguro para sair da montanha, siga para (%d, %d)!!\n", posSaida[0], posSaida[1]);
    else
        printf("NÃO existe um caminho seguro para sair, chame ajude!!\n");

    return 0;
}
/// <---- ATE AQUI!!! ----

/// ---- APENAS IMPLEMENTE AS FUNCOES DAQUI PRA BAIXO

int caminho(int linha, int coluna, int mapa[9][9], int visitado[9][9], int posSaida[2])
{

    if (mapa[linha][coluna] == 0)
    {
        posSaida[0] = linha;
        posSaida[1] = coluna;
        return 1;
    }

    visitado[linha][coluna] = 1;

    int movimentos[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

    for (int i = 0; i < 4; i++)
    {
        int novoX = linha + movimentos[i][0];
        int novoY = coluna + movimentos[i][1];

        if (isValidMove(novoX, novoY, mapa[linha][coluna], mapa, visitado))
        {
            if (caminho(novoX, novoY, mapa, visitado, posSaida))
            {
                return 1;
            }
        }
    }

    return 0;
}


int isValidMove(int linha, int coluna, int alturaAtual, int mapa[9][9], int visitado[9][9])
{
    return linha >= 0 && linha < 9 && coluna >= 0 && coluna < 9 &&
           !visitado[linha][coluna] &&
           mapa[linha][coluna] <= alturaAtual &&
           alturaAtual - mapa[linha][coluna] <= 3;
}
