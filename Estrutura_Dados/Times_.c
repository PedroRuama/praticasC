#include <stdio.h>
#include <string.h>

void ler_alunos(int n_a, char nomes[100][20], int nivel[]);

int main() {
    int n_alunos, n_times;
    char nomes[100][20];
    int nivel[100] = {0};

    scanf("%d %d", &n_alunos, &n_times);
    
    ler_alunos(n_alunos, nomes, nivel);
    printf("\n");
    
    for (int i = 0; i < n_alunos - 1; i++) {
        int max = i;
        for (int j = i + 1; j < n_alunos; j++) {
            if (nivel[j] > nivel[max]) {
                max = j;
            }
        }
       
        int temp_nivel = nivel[i];
        nivel[i] = nivel[max];
        nivel[max] = temp_nivel;

       
        char temp_nome[20];
        strcpy(temp_nome, nomes[i]);
        strcpy(nomes[i], nomes[max]);
        strcpy(nomes[max], temp_nome);
    }

  
    char times[n_times][100][20];
    int count[n_times];          
    for (int i = 0; i < n_times; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n_alunos; i++) {
        int time_index = i % n_times;
        strcpy(times[time_index][count[time_index]], nomes[i]);
        count[time_index]++;
    }

    
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
