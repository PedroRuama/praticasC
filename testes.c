#include <stdio.h>

struct registro
{
    int N;
    int F;
};

int main()
{

    for (int i = 0; i < 3; i++)
    {
        struct registro R;

        scanf("%d %d", &R.N, &R.F);

        for (int i = 0; i < R.F; i++)

            R.N *= R.F;

        printf("%d ", R.N % R.F);
    }
}