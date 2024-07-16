#include <stdio.h>
#include <string.h>

void misterio(char S[20]);

int main()
{
    char S[20] = "Fronteira";
    misterio(S);

    return 0;
}

void misterio(char S[20])
{
    int B = 0, C = 0;

    for (int i = 0; S[i] != '\0'; i++)
    {

        S[i] = toupper(S[i]);

        B += S[i] - 64; // A = 65 na tabela ASCII
    }

    C = B % 26;

    printf("%d", C);
}