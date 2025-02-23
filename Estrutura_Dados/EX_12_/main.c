
// Autor: Pedro Ruama Nunes dos Santos
// RA: 831660


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "deque.h"


int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    Deque* deque = criarDeque(M);

    for (int i = 0; i < N; i++) {
        char operacao[10];
        scanf("%s", operacao);

        if (strcmp(operacao, "insereI") == 0) {
            int valor;
            scanf("%d", &valor);
            if (!insereI(deque, valor)) {
                printf("cheia\n");
            }
        } else if (strcmp(operacao, "insereF") == 0) {
            int valor;
            scanf("%d", &valor);
            if (!insereF(deque, valor)) {
                printf("cheia\n");
            }
        } else if (strcmp(operacao, "removeI") == 0) {
            int removido = removeI(deque);
            if (removido == 0) {
                printf("vazia\n");
            } else {
                printf("%d\n", removido);
            }
        } else if (strcmp(operacao, "removeF") == 0) {
            int removido = removeF(deque);
            if (removido == 0) {
                printf("vazia\n");
            } else {
                printf("%d\n", removido);
            }
        }
    }

    liberarDeque(deque);
    return 0;
}
