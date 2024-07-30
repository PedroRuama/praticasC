#include <stdio.h>

int main()
{
    long long int tan, tamanho, elemento;

    scanf("%lld", &tamanho);
    tan = tamanho + 1;

    scanf("%lld", &elemento);

    long long int piramide[tan][tan];

    for (int i = 0; i < tan; i++)
    {
        for (int j = 0; j < tan; j++)
        {
            if (j <= i)
            {
                if (j == 0)
                {
                    piramide[i][j] = 1;
                }
                else if (j == i)
                {
                    piramide[i][j] = 1;
                }
                else
                {
                    piramide[i][j] = piramide[i - 1][j] + piramide[i - 1][j - 1];
                }
            }
            else
            {
                piramide[i][j] = 0;
            }
        }
    }

    // for (int i = 0; i < tan; i++)
    // {
    //     for (int j = 0; j < tan; j++)
    //     {
    //         printf("%lld ", piramide[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // printf("\n");

    printf("%lld\n", piramide[tan-1][elemento]);

    return 0;
}