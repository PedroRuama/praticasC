#include <stdio.h>
#include <stdlib.h>
#include "deque.h"


Node* criarNode(int valor) {
    Node* novoNode = (Node*)malloc(sizeof(Node));
    if (!novoNode) {
        printf("Erro ao alocar memória para o nó.\n");
        exit(1);
    }
    novoNode->valor = valor;
    novoNode->prev = NULL;
    novoNode->next = NULL;
    return novoNode;
}

Deque* criarDeque(int capacidade) {
    Deque* deque = (Deque*)malloc(sizeof(Deque));
    if (!deque) {
        printf("Erro ao alocar memória para a Deque.\n");
        exit(1);
    }
    deque->front = NULL;
    deque->rear = NULL;
    deque->tamanho = 0;
    deque->capacidade = capacidade;
    return deque;
}

int insereI(Deque* deque, int valor) {
    if (deque->tamanho == deque->capacidade) {
        return 0; // Deque cheia
    }

    Node* novoNode = criarNode(valor);

    if (deque->tamanho == 0) {
        deque->front = novoNode;
        deque->rear = novoNode;
    } else {
        novoNode->next = deque->front;
        deque->front->prev = novoNode;
        deque->front = novoNode;
    }

    deque->tamanho++;
    return 1;
}


int insereF(Deque* deque, int valor) {
    if (deque->tamanho == deque->capacidade) {
        return 0; // Deque cheia
    }

    Node* novoNode = criarNode(valor);

    if (deque->tamanho == 0) {
        deque->front = novoNode;
        deque->rear = novoNode;
    } else {
        novoNode->prev = deque->rear;
        deque->rear->next = novoNode;
        deque->rear = novoNode;
    }

    deque->tamanho++;
    return 1;
}

int removeI(Deque* deque) {
    if (deque->tamanho == 0) {
        return 0; // Deque vazia
    }

    Node* temp = deque->front;
    int valor = temp->valor;

    if (deque->tamanho == 1) {
        deque->front = NULL;
        deque->rear = NULL;
    } else {
        deque->front = deque->front->next;
        deque->front->prev = NULL;
    }

    free(temp);
    deque->tamanho--;
    return valor;
}

int removeF(Deque* deque) {
    if (deque->tamanho == 0) {
        return 0; // Deque vazia
    }

    Node* temp = deque->rear;
    int valor = temp->valor;

    if (deque->tamanho == 1) {
        deque->front = NULL;
        deque->rear = NULL;
    } else {
        deque->rear = deque->rear->prev;
        deque->rear->next = NULL;
    }

    free(temp);
    deque->tamanho--;
    return valor;
}

void liberarDeque(Deque* deque) {
    while (deque->front != NULL) {
        Node* temp = deque->front;
        deque->front = deque->front->next;
        free(temp);
    }
    free(deque);
}