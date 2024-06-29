#include <stdio.h>

#define REJ "Rejeitado\n"
#define APR "Aprovado\n"
#define RELATORIO "id:%d vencimento:%d emissor:%c genero:%c\n"

typedef int qntd;
typedef struct imigrante
{
    int ID;
    int ano;
    char pais;
    char genero;
    int status;
} Imigrante;

int main()
{
    int imgrt;
    int i;
    scanf("%d", &imgrt);

   
    Imigrante imigrante_[imgrt];

    for (i = 0; i < imgrt; i++)
    {
        scanf("%d%*c%d%*c%c%*c%c%*c", &imigrante_[i].ID, &imigrante_[i].ano, &imigrante_[i].pais, &imigrante_[i].genero);
      

        if (imigrante_[i].ID < 100 || imigrante_[i].ID > 999 || imigrante_[i].ano < 2021 || imigrante_[i].pais != 'A' && imigrante_[i].pais != 'S' && imigrante_[i].pais != 'K' || imigrante_[i].genero != 'M' && imigrante_[i].genero != 'F' && imigrante_[i].genero != 'O')
        {
            imigrante_[i].status = 0;
        }
        else
        {
            imigrante_[i].status = 1;
        }

        if (imigrante_[i].status)
        {
            printf(APR);
        }
        else
        {
            printf(REJ);
        }
    }
 
    
    printf("Resultados:\n");
    for (i = 0; i < imgrt; i++)
    {
        printf(RELATORIO), imigrante_[i].ID, imigrante_[i].ano, imigrante_[i].pais, imigrante_[i].genero;
        if (imigrante_[i].status)
        {
            printf(APR);
        }
        else
        {
            printf(REJ);
        }
    }

    return 0;
}