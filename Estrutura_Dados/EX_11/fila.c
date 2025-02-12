#include "fila.h"

void initialize(Fila *f) {
    f->primeiro = f->ultimo = NULL;
    f->quantidade = 0;
}



int vazia(Fila *f)
{
    return f->primeiro == NULL;
}


void insere(Fila *f, int valor)
{
    Node *n = (Node *)malloc(sizeof(Node)); 

    n->item = valor;
    n->link = NULL; 

    if (f->ultimo)
    {
        f->ultimo->link = n; 
    }
    else
    {
        f->primeiro = n; 
    }

    f->ultimo = n; 
    f->quantidade++;
}


int retira(Fila *f)
{
   if (!vazia(f))
   {
        Node *n = f->primeiro;
        int item = n->item;
        f->primeiro = n->link;
        if (f->primeiro == NULL)
        {
            f->ultimo= NULL;
        }
        free(n);
        f->quantidade--;  
        return item;      
   }
   return 0;
}


void imprimir(Fila *f) {
    if (vazia(f)) return;

    Node *atual = f->primeiro;
    printf("%d", atual->item);
    atual = atual->link;

    while (atual) {
        printf(" %d", atual->item);
        atual = atual->link;
    }
    printf("\n");
}


void inverter(Fila *f)
{
    if (!vazia(f))
    {
        int temp = retira(f);
        inverter(f);
        insere(f, temp);
    }
}