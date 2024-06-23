#include <stdio.h>

#define SENHA_INVALIDA "senha inválida!\n" 
#define PARAM "pendências:"
#define SENHA_FORTE    "senha forte!\n"

int main()
{
    int LETRA = 0, letra = 0, numero = 0, especial = 0, qntdChar = 0, espacamento = 0;
    int caractere;
    char senha;

    for (caractere = 0;; caractere++)
    {
        scanf("%c", &senha);

        if (senha >= 'A' && senha <= 'Z')
        {
            LETRA = 1;
        }
        if (senha >= '0' && senha <= '9')
        {
            numero = 1;
        }
        if (senha >= 'a' && senha <= 'z')
        {
            letra = 1;
        }
        if (caractere >= 6)
        {
            qntdChar = 1;
        }
        if (senha >= '!' && senha <= '/' || senha >= ':' && senha <= '@' || senha >= '[' && senha <= '_' || senha >= '{' && senha <= '~')
        {
            especial = 1;
        }
        if (senha == ' ' || senha == '"' || senha == "'")
        {
            espacamento = 1;
        }
        if (senha == "\n")
        {
            break;
        }
        
    }

    if (LETRA == 0 || letra == 0 || numero == 0 || especial == 0 || qntdChar == 0 || espacamento == 1)
    {
        printf(SENHA_INVALIDA);
        printf(PARAM);

        if (LETRA == 0)
        {
           printf(" 1 ");
        }
        if (letra == 0)
        {
           printf(" 2 ");
        }
        if (numero == 0)
        {
           printf(" 3 ");
        }
        if (especial == 0)
        {
           printf(" 4 ");
        }
        if (qntdChar == 0)
        {
           printf(" 5 ");
        }
        if (espacamento == 1)
        {
           printf(" 6 ");
        }
        

    }else
    {
        printf(SENHA_FORTE);
    }
    
    

  

    return 0;
}