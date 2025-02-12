#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ALUNOS 100
#define MAX_TIMES 100

typedef struct {
    char nome[101]; 
    int habilidade; 
} Aluno;


int comparar_habilidade(const void *a, const void *b) {
    Aluno *alunoA = (Aluno *)a;
    Aluno *alunoB = (Aluno *)b;
    return alunoB->habilidade - alunoA->habilidade;
}

int comparar_nomes(const void *a, const void *b) {
    char *nomeA = *(char **)a;
    char *nomeB = *(char **)b;
    return strcmp(nomeA, nomeB);
}

int main() {
    int n_alunos, n_times;
    Aluno alunos[MAX_ALUNOS];
    char *times[MAX_TIMES][MAX_ALUNOS]; 
    int contador[MAX_TIMES] = {0};      

    
    scanf("%d %d", &n_alunos, &n_times);

    
    for (int i = 0; i < n_alunos; i++) {
        scanf("%s %d", alunos[i].nome, &alunos[i].habilidade);
    }

    
    qsort(alunos, n_alunos, sizeof(Aluno), comparar_habilidade);

    
    for (int i = 0; i < n_alunos; i++) {
        int time_atual = i % n_times;
        times[time_atual][contador[time_atual]++] = alunos[i].nome;
    }


    for (int i = 0; i < n_times; i++) {
       
        qsort(times[i], contador[i], sizeof(char *), comparar_nomes);

    
        printf("Time %d\n", i + 1);
        for (int j = 0; j < contador[i]; j++) {
            printf("%s\n", times[i][j]);
        }
        printf("\n");
    }

    return 0;
}
