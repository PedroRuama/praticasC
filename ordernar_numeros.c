#include <stdio.h>

int main()
{

    int qntd = 0;
    scanf("%d", &qntd);

    int numeros[qntd], n, tempn;

    for (int i = 0; i < qntd; i++)
    {
        scanf("%d", &numeros[i]);
    }
    printf("\n");

    for (int i = 0; i < qntd; i++)
    {
        for (int j = 0; j < qntd; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                tempn = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = tempn;
            }
        }
    }

    for (int i = 0; i < qntd; i++)
    {
        printf("%d ", numeros[i]);
    }


    return 0;
}
