#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[101]; // Nome da rena
    int peso;       // Peso da rena
    int idade;      // Idade da rena
    float altura;   // Altura da rena
} Rena;

// Função de comparação para ordenação
int comparar_renas(const void *a, const void *b) {
    Rena *renaA = (Rena *)a;
    Rena *renaB = (Rena *)b;

    // Peso decrescente
    if (renaB->peso != renaA->peso)
        return renaB->peso - renaA->peso;

    // Idade crescente
    if (renaA->idade != renaB->idade)
        return renaA->idade - renaB->idade;

    // Altura crescente
    if (renaA->altura != renaB->altura)
        return (renaA->altura > renaB->altura) ? 1 : -1;

    // Nome em ordem lexicográfica
    return strcmp(renaA->nome, renaB->nome);
}

int main() {
    int N, M;

    // Lendo o número de renas e o número de renas que irão puxar o trenó
    scanf("%d %d", &N, &M);

    Rena renas[N];

    // Lendo as informações de cada rena
    for (int i = 0; i < N; i++) {
        scanf("%s %d %d %f", renas[i].nome, &renas[i].peso, &renas[i].idade, &renas[i].altura);
    }

    // Ordenando as renas conforme os critérios
    qsort(renas, N, sizeof(Rena), comparar_renas);

    // Imprimindo as renas selecionadas
    printf("CENARIO\n");
    for (int i = 0; i < M; i++) {
        printf("%d - %s\n", i + 1, renas[i].nome);
    }

    return 0;
}
