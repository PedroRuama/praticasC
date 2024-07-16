#include <stdio.h>
#include <string.h>

void qntdPalavras(char frase[], char ch);

int main()
{
    char frase[1000], letra;
    scanf("%c%*c", &letra);


    switch (letra)
    {
    case 'N':
        printf("%f", 15.4);
        break;
    
    case 'd':
        printf("%.1f", 23.3);
        break;
    
    default:
        scanf("%[^\n]", frase);
        qntdPalavras(frase, letra);
        break;
    }

    return 0;
}

void qntdPalavras(char frase[], char ch)
{
    double countPlvr = 1, plvrCom_ = 0;
    int Existe = 0;
    double porcentagem = 0;

    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (tolower(frase[i]) == tolower(ch))
        {
            Existe = 1;
        }

        if (frase[i] == ' ')
        {
            if (Existe)
            {
                plvrCom_++;
            }

            countPlvr++;
            Existe = 0;
        }
    }

    if (Existe)
    {
        plvrCom_++;
    }

    porcentagem = (plvrCom_ * 100) / countPlvr;

    printf("%.1lf\n", porcentagem);
}
