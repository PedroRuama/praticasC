#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "deque.h"

int main() {
    int N, M, addValor;
    char acao[10];
    scanf("%d %d", &N, &M);

    Deque* vetorDeque = criaDeque(M);

    while (N > 0) {

        scanf(" %s", acao);

        if (strcmp(acao, "insereI") == 0) { // Inserir no início
            scanf("%d", &addValor);
            if (insereI(vetorDeque, addValor) == 0) {
                printf("cheia\n");
            }

        } else if (strcmp(acao, "insereF") == 0) { // Inserir no fim
            scanf("%d", &addValor);
            if (insereF(vetorDeque, addValor) == 0) {
                printf("cheia\n");
            }

        } else if (strcmp(acao, "removeI") == 0) { // Remover do início
            int valorRemovido = removeI(vetorDeque);
            if (valorRemovido == 0) {
                printf("vazia\n");
            } else {
                printf("%d\n", valorRemovido);
            }

        } else if (strcmp(acao, "removeF") == 0) { // Remover do fim
            int valorRemovido = removeF(vetorDeque);
            if (valorRemovido == 0) {
                printf("vazia\n");
            } else {
                printf("%d\n", valorRemovido);
            }
        }

        N--;
    }

    liberadeque(vetorDeque);
    return 0;
}
