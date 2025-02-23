#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

Deque* criaDeque(int tamanhoMax) { // Função para criar a deque com tamanho dinâmico (malloc)

    Deque* deque = (Deque*)malloc(sizeof(Deque));
    deque->array = (int*)malloc(tamanhoMax * sizeof(int));
    deque->tamanhoMax = tamanhoMax; // Salvando o tamanho máximo do deque
    deque->inicio = 0; // Salvando o início como 0 (node)
    deque->fim = 0; // Salvando o fim como 0 (node)
    deque->tamanhoAtual = 0; // Salvando o tamanho atual do deque
    return deque;

}

int insereI(Deque* deque, int valor){ // Função para inserir no início

    if(deque->tamanhoAtual == deque->tamanhoMax){ // Checando se o deque está cheio.
        return 0;
    }
    deque->inicio--;
    if(deque->inicio < 0){
        deque->inicio = deque->tamanhoMax - 1;
    }
    deque->array[deque->inicio] = valor;
    deque->tamanhoAtual++;
    return 1;

}

int insereF(Deque* deque, int valor){ // Função para inserir no fim

    if(deque->tamanhoAtual == deque->tamanhoMax){ // Checando se o deque está cheio.
        return 0;
    }
    deque->array[deque->fim] = valor;
    deque->fim = (deque->fim + 1) % deque->tamanhoMax;
    deque->tamanhoAtual++;
    return 1;

}

int removeI(Deque* deque) {

    if(deque->tamanhoAtual == 0) {
        return 0;
    }
    int valorRemovido = deque->array[deque->inicio];
    deque->inicio = (deque->inicio + 1) % deque->tamanhoMax;
    deque->tamanhoAtual--;
    return valorRemovido;

}


int removeF(Deque* deque) {

    if(deque->tamanhoAtual == 0) {
        return 0;
    }
    deque->fim--;
    if(deque->fim < 0) {
        deque->fim = deque->tamanhoMax - 1;
    }
    int valorRemovido = deque->array[deque->fim];
    deque->tamanhoAtual--;
    return valorRemovido;
    
}


void liberadeque(Deque* deque){
    free(deque->array);
    free(deque);
}