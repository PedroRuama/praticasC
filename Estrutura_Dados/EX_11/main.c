c
#include <stdio.h>
#include "fila.h"

int main()
{
    int n, valor;
    scanf("%d", &n);

    Fila fila;
    initialize(&fila, n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &valor);
        insere(&fila, valor);
    }

    inverter(&fila);
    imprimir(&fila);

    destroirFila(&fila);

    return 0;
}
