// Autor: Pedro Ruama Nunes dos Santos
// RA: 831660

#include <stdio.h>
#include <string.h>
#include "fila.h"

int main()
{
    int n, valor;
    Fila *fila = (Fila *)malloc(sizeof(Fila));
    initialize(fila);

 
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &valor);
        insere(fila, valor);
    }

    inverter(fila);
    imprimir(fila);

    free(fila);

    return 0;
}
