
#include <stdio.h>
void selection(int v[100], int n);
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

    selection(vetor, n);


    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    return 0;
}

void selection(int vetor[100], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int min = i;

        for (int j=i+1; j < n; j++)
        {
            if (vetor[j] < vetor[min])
            {
                min = j;
            }
        }
        swap(vetor, i, min);

        // print
        sleep(1);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", vetor[i]);
        }
        printf("\n\n");
    }
    
}

void swap(int v[], int a, int b)
{
    int temp = v[a];
    v[a] = v[b];
    v[b] = temp;
}
