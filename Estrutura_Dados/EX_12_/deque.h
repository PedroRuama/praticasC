// deque.h
#ifndef DEQUE_H
#define DEQUE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura de um nó da Deque
typedef struct Node {
    int valor;
    struct Node* prev;
    struct Node* next;
} Node;

// Estrutura da Deque
typedef struct Deque {
    Node* front;
    Node* rear;
    int tamanho;
    int capacidade;
} Deque;

Node* criarNode(int valor);
Deque* criarDeque(int capacidade);
int insereI(Deque* deque, int valor);
int insereF(Deque* deque, int valor);
int removeI(Deque* deque);
int removeF(Deque* deque);
void liberarDeque(Deque* deque);

#endif