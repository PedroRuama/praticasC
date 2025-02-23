// Autor: Pedro Ruama Nunes dos Santos
// RA: 831660

#include "fila.h"

Fila* initialize(Fila *f, int qntd) {
    f->primeiro = f->ultimo = NULL;
    f->quantidade = 0;
    f->max = qntd;
    return f;
}

int vazia(Fila *f) {
    return f->quantidade == 0;
}

void insere(Fila *f, int valor) {
    if (f->quantidade >= f->max) {
        printf("Fila cheia!\n");
        return;
    }

    Node *n = (Node *)malloc(sizeof(Node));
    if (!n) {
        printf("Erro ao alocar memória.\n");
        return;
    }

    n->item = valor;
    n->link = NULL;

    if (f->ultimo)
        f->ultimo->link = n;
    else
        f->primeiro = n;
    
    f->ultimo = n;
    f->quantidade++;
}

int retira(Fila *f) {
    if (vazia(f)) {
        printf("Fila vazia!\n");
        return -1; 
    }

    Node *n = f->primeiro;
    int item = n->item;
    f->primeiro = n->link;

    if (!f->primeiro)
        f->ultimo = NULL;

    free(n);
    f->quantidade--;
    return item;
}

void imprimir(Fila *f) {
    if (vazia(f)) {
        printf("Fila vazia!\n");
        return;
    }

    Node *atual = f->primeiro;
    printf("%d", atual->item);
    atual = atual->link;

    while (atual) {
        printf(" %d", atual->item);
        atual = atual->link;
    }
    printf("\n");
}

void inverter(Fila *f) {
    if (!vazia(f)) {
        
        int temp = retira(f);        
        inverter(f);


        insere(f, temp);
    }
}

void destroirFila(Fila *f) {
    while (!vazia(f)) {
        retira(f);
    }
    f->primeiro = f->ultimo = NULL;
}
