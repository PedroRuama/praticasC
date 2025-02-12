#include <stdio.h>

int recursao(int v[], unsigned short int tamanho, unsigned short int operacao);

int main(int argc, char *argv[]) {
    unsigned short int op = 0;
    int vetor[500] = {0};


}

int recursao(int v[], unsigned short int tamanho, unsigned short int operacao) {
    switch (operacao)) {
    case 0:
        int soma = 0;
        for (unsigned short int i = 0; i < tamanho; i++)
            soma += v[i];
    case 1:
        int maior = v[0];
        for (int i = 1; i < n; i++)
            if (v[i] > maior)
                maior = v[i];
        break;
    case 2:
        int menor = v[0];
        for (int i = 1; i < n; i++)
            if (v[i] > maior)
                maior = v[i];
        break;
    case 3:
        unsigned short int crescente = 0;
        for (int i = 0; i < (tamanho - 1); i++) {
            if (v[i] > v[i+1])
                crescente = 0;
        }

        if (crescente)
            printf("Crescente: sim\n");
        else
                    printf("Crescente: nao\n");

        break;


    
    default:
        break;
    }
