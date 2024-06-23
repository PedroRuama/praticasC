#include <stdio.h>

#define NENHUMAOCORRENCIA "O PRODUTO %d NAO FOI VENDIDO NO DIA\n"
#define OCORRENCIA "O PRODUTO %d FOI VENDIDO %d VEZES NO DIA\n"
int main()
{
    int clientes, indices[100], reorganizado[100];

    scanf("%d", &clientes);

    int i;
   
    for (i = 0; i < clientes; i++)
    {
        scanf("%d", &indices[i]);
        reorganizado[i] = indices[i];
       
    }

    int z;
    for (z = 0; z < clientes; z++)
    {
        printf("%d ", indices[reorganizado[z]]);
    }
  
  

    return 0;
}