#include <stdio.h>

#define MAX_HEIGHT 20
#define NUM_FRASCOS 3

#define CHEIO "O frasco %d esta cheio!\n"
#define VAZIO "O frasco %d esta vazio!\n"

#define LINHA_FRASCOS "|%c| |%c| |%c|\n"
#define FUNDO_FRASCOS "\\_/ \\_/ \\_/\n"

int main()
{
    int h;
    char frascos[NUM_FRASCOS][MAX_HEIGHT];
    int topo[NUM_FRASCOS] = {-1, -1, -1};

    scanf("%d", &h);

    
    for (int i = 0; i < NUM_FRASCOS; i++)
    {
        char entrada[MAX_HEIGHT + 1];
        scanf("%s", entrada);
        int j = 0;
        while (entrada[j] != '\0')
        {
            frascos[i][j] = entrada[j];
            topo[i]++;
            j++;
        }
    }

   
    while (1)
    {
        int origem, destino;
        scanf("%d %d", &origem, &destino);
        if (origem == -1 && destino == -1)
        {
            break;
        }
        origem--;
        destino--;

    
        if (origem >= 0 && origem < NUM_FRASCOS && destino >= 0 && destino < NUM_FRASCOS)
        {
            if (topo[origem] >= 0)
            {
                if (topo[destino] < h - 1)
                {
                    frascos[destino][++topo[destino]] = frascos[origem][topo[origem]--];
                }
                else
                {
                    printf(CHEIO, destino + 1);
                }
            }
            else
            {
                printf(VAZIO, origem + 1);
            }
        }
    }

    for (int i = h - 1; i >= 0; i--)
    {
        printf(LINHA_FRASCOS,
               (i <= topo[0]) ? frascos[0][i] : ' ',
               (i <= topo[1]) ? frascos[1][i] : ' ',
               (i <= topo[2]) ? frascos[2][i] : ' ');
    }
    printf(FUNDO_FRASCOS);

    return 0;
}
