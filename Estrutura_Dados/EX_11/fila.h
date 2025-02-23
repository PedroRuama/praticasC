#ifndef FILA_H
#define FILA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int item;  
    struct node *link;
} Node;

typedef struct {
    Node *primeiro, *ultimo;
    int quantidade;
    int max;
} Fila;

Fila* initialize(Fila *f, int qntd);
int vazia(Fila *f);
void insere(Fila *f, int valor);
int retira(Fila *f);
void imprimir(Fila *f);
void inverter(Fila *f);
void destroirFila(Fila *f);

#endif
