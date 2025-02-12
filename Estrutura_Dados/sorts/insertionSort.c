#include <stdio.h>
void insertion(int v[100], int n);
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

    insertion(vetor, n);


    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    return 0;
}

void insertion(int vetor[100], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;

        while (j > 0 && vetor[j-1] > vetor[j])
        {
          swap(vetor, j-1, j);
          j--;
        }
        

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
