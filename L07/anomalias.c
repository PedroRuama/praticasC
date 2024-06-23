#include <stdio.h>

int main()
{
    int n_anomalias, dados_anomalia[50][3];
    char nome_anomalia[50][50] = {0}, prioridade;
    int i, j, z, nome, MaxA[2] ={0}, MaxC[2]={0}, MaxD[2]={0};

    scanf("%d%*c", &n_anomalias);

    for (i = 0; i < n_anomalias; i++)
    {
        z = 0;

        while (1)
        {

            scanf("%c", &nome_anomalia[i][z]);
            if (nome_anomalia[i][z] == ';' || nome_anomalia == ' ')
            {
                break;
            }
            
            z++;
        }
      
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &dados_anomalia[i][j]);
            // printf(" %d", dados_anomalia[i][j]);
            if (j == 0)
            {
              if (dados_anomalia[i][j] > MaxA[0])
              {
                MaxA[0] = dados_anomalia[i][j];
                MaxA[1] = i;
              }
              
            }
            if (j == 1)
            {
                
              
              if (dados_anomalia[i][j] > MaxC[0])
              {
                MaxC[0] = dados_anomalia[i][j];
                MaxC[1] = i;
              }
              
            }

            if (j== 2)
            {
                
              if (dados_anomalia[i][j] > MaxD[0])
              {
                MaxD[0] = dados_anomalia[i][j];
                MaxD[1] = i;
              }              
            }
            
            
            
        }

     
    }

    scanf(" %c", &prioridade);

    switch (prioridade)
    {
    case 'A':
        z = 0;
        while (1)
        {
            if (nome_anomalia[MaxA[1]][z] == ';' || nome_anomalia == ' ')
            {
                break;
            }
            printf("%c", nome_anomalia[MaxA[1]][z]);
            z++;
        }
        break;
    
    case 'C':
        z = 0;
        while (1)
        {
            if (nome_anomalia[MaxC[1]][z] == ';' || nome_anomalia == ' ')
            {
                break;
            }
            printf("%c", nome_anomalia[MaxC[1]][z]);
            z++;
        }
        break;
    
    case 'D':
        z = 0;
        while (1)
        {
            if (nome_anomalia[MaxD[1]][z] == ';' || nome_anomalia == ' ')
            {
                break;
            }
            printf("%c", nome_anomalia[MaxD[1]][z]);
            z++;
        }
        break;
    
    default:
        break;
    }


    return 0;
}