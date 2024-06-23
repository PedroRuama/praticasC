#include <stdio.h>

#define ABRIU "O cofre abriu! Agora, pegue o dinheiro!\n"
#define TRANCOU "O cofre trancou! Exploda-o!\n"
#define DIGITO0 "O cofre ainda nao abriu! Eh melhor tentar um pouco mais...\n"

int main()
{
    int senha, protecao1, protecao2, protecao3, protecao4, protecao5;
    int d1 = 0, d2 = 0, d3 = 0, d4 = 0;  
    int volante;
    char MaisMenos;
    
    scanf("%d", &senha);
    scanf("%d %d %d %d %d", &protecao1, &protecao2, &protecao3, &protecao4, &protecao5);

    while (1) {
        scanf("%d", &volante);
        
        if (volante == 0) {
            printf(DIGITO0);
            printf("%d%d%d%d\n", d1, d2, d3, d4);
            break;
        }
        
        scanf(" %c", &MaisMenos);
        
        if (MaisMenos == '+') {
            if (volante == 1) {
                d1 = (d1 + 1) % 10;
            } else if (volante == 2) {
                d2 = (d2 + 1) % 10;
            } else if (volante == 3) {
                d3 = (d3 + 1) % 10;
            } else if (volante == 4) {
                d4 = (d4 + 1) % 10;
            }
        } else if (MaisMenos == '-') {
            if (volante == 1) {
                d1 = (d1 - 1 + 10) % 10;
            } else if (volante == 2) {
                d2 = (d2 - 1 + 10) % 10;
            } else if (volante == 3) {
                d3 = (d3 - 1 + 10) % 10;
            } else if (volante == 4) {
                d4 = (d4 - 1 + 10) % 10;
            }
        }
        
       
        int numeroAtual = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
        
        if (numeroAtual == senha) {
            printf(ABRIU);
            printf("%04d\n", numeroAtual);
            break;
        } else if (numeroAtual == protecao1 || numeroAtual == protecao2 || numeroAtual == protecao3 || numeroAtual == protecao4 || numeroAtual == protecao5) {
            printf(TRANCOU);
            printf("%04d\n", numeroAtual);
            break;
        }
    }
    
    return 0;
}
