#include <stdio.h>
#include <string.h>

void ler_alunos(int n_a, char nomes[100][20], int nivel[]);

int main() {
    int n_alunos, n_times;
    char nomes[100][20];
    int nivel[100] = {0};

    scanf("%d %d", &n_alunos, &n_times);

    // printf("n_A= %d , n_T=%d\n", n_alunos, n_times);

    // Lendo os alunos
    ler_alunos(n_alunos, nomes, nivel);

    // Ordenando os alunos pelo nível (maior para menor) com Selection Sort
    for (int i = 0; i < n_alunos - 1; i++) {
        int max = i;
        for (int j = i + 1; j < n_alunos; j++) {
            if (nivel[j] > nivel[max]) {
                max = j;
            }
        }
        // Troca dos níveis
        int temp_nivel = nivel[i];
        nivel[i] = nivel[max];
        nivel[max] = temp_nivel;

        // Troca dos nomes
        char temp_nome[20];
        strcpy(temp_nome, nomes[i]);
        strcpy(nomes[i], nomes[max]);
        strcpy(nomes[max], temp_nome);
    }

    // Distribuindo os alunos em times de forma equilibrada
    char times[n_times][100][20]; // Máximo de 100 alunos por time
    int count[n_times];           // Contadores para o número de jogadores em cada time
    for (int i = 0; i < n_times; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n_alunos; i++) {
        int time_index = i % n_times; // Distribuição alternada
        strcpy(times[time_index][count[time_index]], nomes[i]);
        count[time_index]++;
    }

    // Exibindo os times
    for (int i = 0; i < n_times; i++) {
        printf("Time %d\n", i + 1);
        for (int j = 0; j < count[i]; j++) {
            printf("%s\n", times[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void ler_alunos(int n_a, char nomes[100][20], int nivel[]) {
    for (int i = 0; i < n_a; i++) {
        scanf("%s %d", nomes[i], &nivel[i]);  
    }
}
