#include <stdio.h>

#define SUCESSO "sucesso!\n"
#define FRACASSO "fracasso!\n"
#define ALFACE "a alface foi devorada!\n"
#define OVELHA "a ovelha foi devorada!\n"

int main()
{
    char lado_fazendeiro = 'E';
    char lado_lobo = 'E';
    char lado_alface = 'E';
    char lado_ovelha = 'E';
    char acao;

    for (;;)
    {
        scanf(" %c", &acao);

       

        switch (acao)
        {
        case 'L':
            if (lado_fazendeiro == lado_lobo)
            {
                if (lado_lobo == 'E')
                {
                    lado_lobo = 'D';
                }
                else
                {
                    lado_lobo = 'E';
                }
            }
            if (lado_fazendeiro == 'E')
            {
                lado_fazendeiro = 'D';
            }
            else
            {
                lado_fazendeiro = 'E';
            }
            // printf("lado fazendeiro: %c\n", lado_fazendeiro);
            // printf("lado lobo: %c\n", lado_lobo);
            break;
        case 'O':
            if (lado_fazendeiro == lado_ovelha)
            {
                if (lado_ovelha == 'E')
                {
                    lado_ovelha = 'D';
                }
                else
                {
                    lado_ovelha = 'E';
                }
            }
            if (lado_fazendeiro == 'E')
            {
                lado_fazendeiro = 'D';
            }
            else
            {
                lado_fazendeiro = 'E';
            }
            //  printf("lado fazendeiro: %c\n", lado_fazendeiro);
            // printf("lado ovelha: %c\n", lado_ovelha);
            break;
        case 'A':
            if (lado_fazendeiro == lado_alface)
            {
                if (lado_alface == 'E')
                {
                    lado_alface = 'D';
                }
                else
                {
                    lado_alface = 'E';
                }
            }
            if (lado_fazendeiro == 'E')
            {
                lado_fazendeiro = 'D';
            }
            else
            {
                lado_fazendeiro = 'E';
            }
            // printf("lado fazendeiro: %c\n", lado_fazendeiro);
            // printf("lado alface: %c\n", lado_alface);
            break;
        case 'N':
            if (lado_fazendeiro == 'E')
            {
                lado_fazendeiro = 'D';
            }
            else
            {
                lado_fazendeiro = 'E';
            }
            // printf("lado fazendeiro: %c\n", lado_fazendeiro);
            break;
        default:

            continue;
        }

        if ((lado_lobo == lado_ovelha && lado_fazendeiro != lado_lobo) ||
            (lado_ovelha == lado_alface && lado_fazendeiro != lado_ovelha)) {
            printf(FRACASSO);
            if (lado_ovelha == lado_alface) {
                printf(ALFACE);
            }
            if (lado_lobo == lado_ovelha) {
                printf(OVELHA);
            }
           break;
        }

        if (lado_lobo == 'D' && lado_ovelha == 'D' && lado_alface == 'D' && lado_fazendeiro == 'D') {
            printf(SUCESSO);
            break;
        }
    }

    return 0;
}