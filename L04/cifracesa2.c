#include <stdio.h>

int main()
{
    char funcao;
    int key, caracteres, i = 0;
    char letra_cod, newLetra;

    scanf(" %c", &funcao);
    scanf("%d", &key);
    scanf("%d", &caracteres);

    key = key % 26;
    while (i < caracteres)
    {
        scanf(" %c", &letra_cod);

        if (funcao == 'C')
        {
            newLetra = ((letra_cod - 'a' + key) % 26) + 'a';
            printf("%c", newLetra);
        }
        else if (funcao == 'D')
        {
            newLetra = ((letra_cod - 'a' - key + 26) % 26) +'a';
            printf("%c", newLetra);
        } 

        i++;
    }

    return 0;
}
