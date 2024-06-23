#include <stdio.h>

int main() {
    int A[100], tamanhoA, B[100], tamanhoB, C[100], tamanhoC, novoV[200];
    int u1, u2, t1, t2;
    int i, j, temp, z, insert, print;

    scanf("%d", &tamanhoA);

    for (i = 0; i < tamanhoA; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &tamanhoB);

    for (i = 0; i < tamanhoB; i++) {
        scanf("%d", &B[i]);
    }

    scanf("%d", &tamanhoC);

    for (i = 0; i < tamanhoC; i++) {
        scanf("%d", &C[i]);
    }

    while (1) {
        scanf("%d", &u1);
        if (u1 == 4) {
            break;
        }

        if (u1 == 1) {
            for (i = 0; i < tamanhoA; i++) {
                novoV[i] = A[i];
            }
            t1 = tamanhoA;
        } else if (u1 == 2) {
            for (i = 0; i < tamanhoB; i++) {
                novoV[i] = B[i];
            }
            t1 = tamanhoB;
        } else if (u1 == 3) {
            for (i = 0; i < tamanhoC; i++) {
                novoV[i] = C[i];
            }
            t1 = tamanhoC;
        }

        scanf("%d", &u2);

        if (u2 == 1) {
            for (i = 0; i < tamanhoA; i++) {
                insert = 1;
                for (j = 0; j < t1; j++) {
                    if (A[i] == novoV[j]) {
                        insert = 0;
                        break;
                    }
                }
                if (insert) {
                    novoV[t1++] = A[i];
                }
            }
            t2 = t1;
        } else if (u2 == 2) {
            for (i = 0; i < tamanhoB; i++) {
                insert = 1;
                for (j = 0; j < t1; j++) {
                    if (B[i] == novoV[j]) {
                        insert = 0;
                        break;
                    }
                }
                if (insert) {
                    novoV[t1++] = B[i];
                }
            }
            t2 = t1;
        } else if (u2 == 3) {
            for (i = 0; i < tamanhoC; i++) {
                insert = 1;
                for (j = 0; j < t1; j++) {
                    if (C[i] == novoV[j]) {
                        insert = 0;
                        break;
                    }
                }
                if (insert) {
                    novoV[t1++] = C[i];
                }
            }
            t2 = t1;
        }

        if (u1 == 1) {
            for (i = 0; i < t1; i++) {
                A[i] = novoV[i];
            }
            tamanhoA = t1;
        } else if (u1 == 2) {
            for (i = 0; i < t1; i++) {
                B[i] = novoV[i];
            }
            tamanhoB = t1;
        } else if (u1 == 3) {
            for (i = 0; i < t1; i++) {
                C[i] = novoV[i];
            }
            tamanhoC = t1;
        }
    }

    for (i = 0; i < tamanhoA; i++) {
        for (j = 0; j < tamanhoA - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < tamanhoB; i++) {
        for (j = 0; j < tamanhoB - 1 - i; j++) {
            if (B[j] > B[j + 1]) {
                temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < tamanhoC; i++) {
        for (j = 0; j < tamanhoC - 1 - i; j++) {
            if (C[j] > C[j + 1]) {
                temp = C[j];
                C[j] = C[j + 1];
                C[j + 1] = temp;
            }
        }
    }

    printf("A: ");
    for (i = 0; i < tamanhoA; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("B: ");
    for (i = 0; i < tamanhoB; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    printf("C: ");
    for (i = 0; i < tamanhoC; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
