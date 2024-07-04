/// ---- ATENCAO: NAO ALTERAR DAQUI ---->
#include <stdio.h>
#include <math.h>

#define INVALIDO "Operacao invalida\n"
#define MMC "MMC entre %d e %d eh %d\n"
#define MDC "MDC entre %d e %d eh %d\n"
#define FATORIAL "%d! = %lu\n"
#define PRIMO "Numero %d eh primo\n"
#define nPRIMO "Numero %d nao eh primo\n"

int mmc(int n1, int n2);
int mdc(int n1, int n2);
unsigned long fatorial(int n1);
double hipotenusa(int n1, int n2);
int primo(int n);
/// <---- ATE AQUI!!! ----

int main()
{
    int operacao;
    int n1, n2;

    while (1)
    {
        scanf("%d", &operacao);

        switch (operacao)
        {
        case 0:
            return (0);
            break;

        case 1:
            scanf("%d %d", &n1, &n2);
            printf(MMC, n1, n2, mmc(n1, n2));

            break;

        case 2:
            scanf("%d %d", &n1, &n2);
            printf(MDC, n1, n2, mdc(n1, n2));

            break;
        case 3:
            scanf("%d", &n1);
            printf(FATORIAL, n1, fatorial(n1));
            break;
        case 4:
            scanf("%d", &n1);
            if (primo(n1))
            {
                printf(PRIMO, n1);
            }else{
                printf(nPRIMO, n1);
            }   

            break;
        case 5:
            scanf("%d %d", &n1, &n2);
            hipotenusa(n1, n2);
            printf("%lf", hipotenusa(n1, n2));
            break;

        default:
            printf(INVALIDO);
            break;
        }
    }
}

int mmc(int n1, int n2)
{
    return (n1 * n2) / mdc(n1, n2);
}

int mdc(int n1, int n2)
{

    while (n2 != 0)
    {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    return n1;
}

unsigned long fatorial(int n1)
{
    unsigned long resultado = 1;
    for (int i = 1; i <= n1; i++)
    {
        resultado *= i;
    }
    return resultado;
}
int primo(int n1)
{
    if (n1 <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= n1 / 2; i++)
    {
        if (n1 % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

double hipotenusa(int n1, int n2)
{
    int hipotenusa = (n1 * n1) + (n2 * n2);
    return (sqrt(hipotenusa));
}
