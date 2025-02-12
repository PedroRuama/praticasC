#include <stdio.h>
void bubble(int v[100], int n);
void swap(int v[100], int a, int b);

int main()
{
    int vetor[100] = {0}, n;

    // leitura do vetor
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("\n");

    bubble(vetor, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    return 0;
}

void bubble(int vetor[100], int n)
{
    int swapped;
    int i = 0;
    do
    {
        swapped = 0;
        for (int j = n - 1; j > i; j--)
        {
            if (vetor[j - 1] > vetor[j])
            {
                swap(vetor, j - 1, j);
                swapped = 1;
            }
        }
        i++;
    } while (swapped && i < n);

    // print
    sleep(0.5);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
}

void swap(int v[], int a, int b)
{
    int temp = v[a];
    v[a] = v[b];
    v[b] = temp;
}
