#include <stdio.h>
int recursao(int v[500], int n, int x);

// void swap(int v[100], int a, int b)

int x = 0;

int main()
{
    int vetor[500] = {0}, n;

    // leitura do vetor
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    // printf("\n");

    recursao(vetor, n, x);

    return 0;
}
int recursao(int v[500], int n, int x)
{

    int soma = 0;
    int maior = v[0];
    int menor = v[0];
    int crescente = 1;
    int decrescente = 1;
    int espelho = 1;
    switch (x)
    {
    case 0:
        for (int i = 0; i < n; i++)
        {
            soma += v[i];
        }
        printf("Soma: %d\n", soma);
        // printf("\n");
        break;
    case 1:
        for (int i = 1; i < n; i++)
        {
            if (maior < v[i])
            {
                maior = v[i];
            }
        }

        printf("Maior: %d\n", maior);
        // printf("\n");
        break;

    case 2:
        for (int i = 1; i < n; i++)
        {
            if (menor > v[i])
            {
                menor = v[i];
            }
        }

        printf("Menor: %d\n", menor);
        // printf("\n");
        break;

    case 3:
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                crescente = 0;
            }
        }
        if (crescente)
        {
            printf("Crescente: sim\n");
        }
        else
        {
            printf("Crescente: nao\n");
        }
        // printf("\n");
        break;
    case 4:
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] < v[i + 1])
            {
                decrescente = 0;
            }
        }
        if (decrescente)
        {
            printf("Decrescente: sim\n");
        }
        else
        {
            printf("Decrescente: nao\n");
        }
        // printf("\n");
        break;
    case 5:
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] != v[n - i - 1])
            {
                espelho = 0;
            }
        }
        if (espelho)
        {
            printf("Espelhada: sim\n");
        }
        else
        {
            printf("Espelhada: nao\n");
        }

        break;

    case 6:
        return 0;
        break;
    default:
        return 0;
    }

    recursao(v, n, x + 1);
}
