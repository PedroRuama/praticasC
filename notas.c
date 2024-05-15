#include <stdio.h>

int main() {
    float notas[20], vet[20], x=0; 
    int i, tamanho;

    for (i = 0; i <= 20; i++) {
        scanf("%f", &notas[i]);
    }
    printf("while\n");
    int y;
    for(int y=0; x >= 0; y++);{
        scanf("%f", &x);
        vet[y] = x;
        y++; 
    }
    tamanho=sizeof(vet)/sizeof(vet[0]);

    printf("tamanho: %d\n", tamanho);


    for(int amo =0;amo<tamanho;amo++){
        int encontrou;
        for (encontrou = 0; encontrou < 20; encontrou++) {
            if (notas[encontrou] == vet[amo]) {
                break;

            }

        }
        if(encontrou<20)
            printf("existe\n");
        else
            printf("nao existe\n");
    }

    return 0;
}