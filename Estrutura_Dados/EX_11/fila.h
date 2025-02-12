#include <stdio.h>
#include <stdlib.h>



// Definição da estrutura da fila
typedef struct node {
    char item;
    struct node *link;
} Node;

typedef struct {
    Node *primeiro, *ultimo;
    unsigned quantidade;
} Fila;

// Declaração das funções (API)
void initialize(Fila *f);
int vazia(Fila *f);
void insere(Fila *f, int valor);
int retira(Fila *f);
void imprimir(Fila *f);
void inverter(Fila *f);


