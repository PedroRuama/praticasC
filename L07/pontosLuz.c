#include <stdio.h>

#define MAX_SIZE 25

int main() {
    int N, L;
    char sala[MAX_SIZE][MAX_SIZE];
    int luminosidade[MAX_SIZE][MAX_SIZE] = {0};

    
    scanf("%d %d", &N, &L);

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf(" %c", &sala[i][j]);
        }
    }

    
    int pontosComLuminosidadeZero = 0;
    int quantidadeTotalDeLuz = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (sala[i][j] == 'V') {
                
                for (int k = i - L; k <= i + L; k++) {
                    for (int l = j - L; l <= j + L; l++) {
                        if (k >= 0 && k < N && l >= 0 && l < N) {
                            
                            int distancia = (i - k) * (i - k) + (j - l) * (j - l);
                            if (distancia <= L * L) {
                                
                                luminosidade[k][l]++;
                            }
                        }
                    }
                }
            }
        }
    }

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (luminosidade[i][j] == 0) {
                pontosComLuminosidadeZero++;
            }
            quantidadeTotalDeLuz += luminosidade[i][j];
        }
    }

    
    printf("%d\n%d\n", pontosComLuminosidadeZero, quantidadeTotalDeLuz);

    return 0;
}
