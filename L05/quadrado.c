#include <stdio.h>

int main()
{
    int largura, altura;

    // Lê a largura e altura
    scanf("%d %d", &largura, &altura);

    printf("\n");

    // Loop para cada linha
    for (int z = 0; z < altura; z++)
    {
        // Se a largura for 1, imprime apenas um '*'
        if (largura == 1)
        {
            printf("*\n");
        }else if (z == 0 || z == altura - 1)
        {
            for (int i = 0; i < largura; i++)
            {
                printf("*");
            }
            printf("\n");
        }else{
            for (int y = 0; y < largura; y++)
            {
                if (y == 0 || y == largura - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}