#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pilha_
{
    char *dados;
    unsigned topo;
    int capacidade;

} pilha;

// api -------------------------------------------------------------------
pilha *initialize(int qntd)
{
    pilha *p = (pilha *)malloc(sizeof(pilha));
    if (p == NULL)
    {
        printf("Erro ao alocar memoria na pilha\n");
        exit(1);
    }

    p->dados = (char *)malloc(sizeof(char) * qntd);
    if (p->dados == NULL)
    {
        printf("Erro ao alocar memória para os dados da pilha\n");
        free(p);
        exit(1);
    }

    p->topo = -1;
    p->capacidade = qntd;

    return p;
}

// verifica se a pilha esta cheia
int full(pilha *p)
{
    return p->topo == p->capacidade - 1;
}

// verifica se a pilha esta vazia
int empty(pilha *p)
{
    return p->topo == -1;
}

// Adiciona um elemento no topo da pilha
void push(pilha *p, char valor)
{
    if (full(p))
    {
        printf("Erro, pilha cheia\n");
        return;
    }
    p->dados[++(p->topo)] = valor;
}
// Remove umelemento no topo da pilha
int pop(pilha *p)
{
    if (empty(p))
    {
        printf("Erro, pilha vazia\n");
        return -1;
    }
    return p->dados[(p->topo)--];
}

// Retorna o elemento do topo sem removÊ-lo
int top(pilha *p)
{
    if (empty(p))
    {
        printf("Erro: Pilha vazia\n");
        return -1;
    }
    return p->dados[(p->topo)];
}

void free_pilha(pilha *p)
{
    free(p->dados);
    free(p);
}

int tamanho(pilha *p)
{
    return p->topo + 1;
}

//------------------------------------------------------
int main()
{
    pilha *ch = initialize(20);
    pilha *pa = initialize(20);
    pilha *co = initialize(20);

    char palavra[20];
    scanf(" %[^\n]", palavra);

    for (int i = 0; i < strlen(palavra); i++)
    {
        switch (palavra[i])
        {
        case '[':
        case ']':
            push(co, palavra[i]);
            break;
        case '{':
        case '}':
            push(ch, palavra[i]);
            break;
        case '(':
        case ')':
            push(pa, palavra[i]);
            break;

        default:
            break;
        }
    }

    if (!(tamanho(pa) % 2) && !(tamanho(co) % 2) && !(tamanho(ch) % 2))
    {
        printf("Balanceados\n");
    }
    else
    {
        printf("Nao-Balanceados\n");
    }

    // -    Balanceados: “(()())”, “[({})]” e “[()({[]({})})]”
    // – Não-Balanceados: “(])”, “{({)}}” e “[()({[](({})})]”

    free_pilha(pa);
    free_pilha(ch);
    free_pilha(co);
    return 0;
}
