#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

// Definição da estrutura da pilha
typedef struct pilha_ {
    char *dados;
    unsigned topo;
    int capacidade;
} pilha;

// Declaração das funções (API)
pilha *initialize(int qntd);
int full(pilha *p);
int empty(pilha *p);
void push(pilha *p, char valor);
char pop(pilha *p);
char top(pilha *p);
void free_pilha(pilha *p);
int tamanho(pilha *p);


