#include <stdio.h>

void imprimirDivisoes(int nivel, int maxNivel) {
    if (nivel == 0) {
        return; 
    }
    imprimirDivisoes(nivel - 1, maxNivel);

    for (int i = 0; i < nivel; i++) {
        printf("-");
    }
    printf("\n");

    imprimirDivisoes(nivel - 1, maxNivel);
}

void imprimirPolegada(int maxNivel, int posicao) {
   
    for (int i = 0; i < maxNivel; i++) {
        printf("-");
    }
    printf(" %d\n", posicao);

    imprimirDivisoes(maxNivel - 1, maxNivel);
}

int main() {
    int tamanho, quantidade;

    scanf("%d", &tamanho);
    scanf("%d", &quantidade);


    for (int i = 0; i <= tamanho; i++) {
        imprimirPolegada(quantidade, i);
    }

    return 0;
}
