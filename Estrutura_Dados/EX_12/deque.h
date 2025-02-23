// deque.h
#ifndef DEQUE_H
#define DEQUE_H

typedef struct {
    int *array;
    int tamanhoMax;
    int inicio;
    int fim;
    int tamanhoAtual;
} Deque;

Deque* criaDeque(int tamanhoMax);
int insereI(Deque* deque, int valor);
int insereF(Deque* deque, int valor);
int removeI(Deque* deque);
int removeF(Deque* deque);
void liberadeque(Deque* deque);

#endif // DEQUE_H
