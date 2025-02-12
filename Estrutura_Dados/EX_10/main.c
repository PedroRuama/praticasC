// Autor: Pedro Ruama Nunes dos Santos
// RA: 831660

#include <stdio.h>
#include <string.h>
#include "pilha.h"

#define MAX 100000

int main()
{
    int n;
    scanf("%d", &n);

    for (int j = 0; j < n; j++)
    {
        pilha *pilha = initialize(MAX);
        int bem_definido = 1;

        char palavra[MAX];
        scanf(" %[^\n]", palavra);

        int tam = strlen(palavra);  

        for (int i = 0; i < tam; i++)
        {
            switch (palavra[i])
            {
            case '[':
            case '{':
            case '(':
                push(pilha, palavra[i]);
                break;

            case ']':
            case '}':
            case ')':
                if (empty(pilha)) {
                    bem_definido = 0;  
                    break;
                }
                char pops = pop(pilha);
                if ((palavra[i] == ']' && pops != '[') ||
                    (palavra[i] == '}' && pops != '{') ||
                    (palavra[i] == ')' && pops != '('))
                {
                    bem_definido = 0;  
                    break;
                }
                break;

            default:
                continue;
            }

            if (!bem_definido) {
                break;  
            }
        }

        
        if (bem_definido && tamanho(pilha) == 0)
        {
            printf("S\n");
        }
        else
        {
            printf("N\n");
        }

        free_pilha(pilha);
    }

    return 0;
}
