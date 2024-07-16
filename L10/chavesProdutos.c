#include <stdio.h>
#include <string.h>
#include <ctype.h>

void formatKey(int K, char *key);

int main()
{
    int K;
    char key[1001];

    while (scanf("%d %1000[^\n]", &K, key) != EOF)
    {
        formatKey(K, key);
    }

    return 0;
}

void formatKey(int K, char *key)
{
    int n = strlen(key);
    char temp[1001];
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (key[i] != '-')
        {
            temp[j++] = toupper(key[i]);
        }
    }
    temp[j] = '\0';
    int len = j;
    int primGrupo = len % K;

    if (primGrupo == 0)
    {
        primGrupo = K;
    }
    for (int i = 0; i < primGrupo; i++)
    {
        printf("%c", temp[i]);
    }

    for (int i = primGrupo; i < len; i++)
    {
        if ((i - primGrupo) % K == 0)
        {
            printf("-");
        }
        printf("%c", temp[i]);
    }
    printf("\n");
}
