#include <stdio.h>
#include <stdlib.h>



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

    p->dados = (int *)malloc(sizeof(int) * qntd);
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
int empty(pilha  *p)
{
    return p->topo == -1;
}

// Adiciona um elemento no topo da pilha
void push(pilha *p, int valor)
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

//------------------------------------------------------
int main()
{
    pilha *p = initialize(5);

    push(p, 10);
    push(p, 20);
    push(p, 30);

    printf("Elemento no topo: %d\n", top(p));

    printf("Removendo elemento: %d\n", pop(p));
    printf("Elemento no topo agora: %d\n", top(p));
    pop(p);
    printf("Elemento no topo: %d\n", top(p));

    free_pilha(p);
    return 0;
}
