#include <stdio.h>

#define HEROI_VENCEU "O heroi derrotou o grande cara mal! Ele podia ter lutado muito mais, ainda tinha %d de vida!!\n"
#define VILAO_VENCEU "O heroi foi derrotado pelo cara mal! Ainda falta muito para o heroi, pois o vilao tinha %d de vida!!\n"

typedef struct
{
    int vida;
    int ataque;
    int defesa;
    int magia;
} status;

typedef char inventario;

typedef struct
{
    status stts;
    int qtdItens;
    inventario itens[4];
} personagem;

int main()
{
    personagem Heroi, Vilao;
    int i;
    scanf("%d", &Heroi.qtdItens);
    scanf("%d %d %d %d", &Heroi.stts.vida, &Heroi.stts.ataque, &Heroi.stts.defesa, &Heroi.stts.magia);

    for (i = 0; i < Heroi.qtdItens; i++)
    {
        scanf(" %c", &Heroi.itens[i]);
    }

    scanf("%d", &Vilao.qtdItens);
    scanf("%d %d %d %d", &Vilao.stts.vida, &Vilao.stts.ataque, &Vilao.stts.defesa, &Vilao.stts.magia);

    for (i = 0; i < Vilao.qtdItens; i++)
    {
        scanf(" %c", &Vilao.itens[i]);
    }

    char useItem;
    while (1)
    {
        int dano, acaoH, acaoV;
        scanf("%d", &acaoH);
        if (acaoH == 1)
        {
            dano = Heroi.stts.ataque - Vilao.stts.defesa;
            if (dano < 1) dano = 1;
            Vilao.stts.vida -= dano;
        }
        else if (acaoH == 2)
        {
            if (Heroi.stts.magia > 0)
            {
                Vilao.stts.vida -= 3;
                Vilao.stts.defesa -= 3;
                Heroi.stts.magia -= 1;
                if (Vilao.stts.defesa < 0) Vilao.stts.defesa = 0;
            }
        }
        else if (acaoH == 3)
        {
            scanf(" %c", &useItem);
            for (i = 0; i < Heroi.qtdItens; i++)
            {
                if (useItem == Heroi.itens[i])
                {
                    if (Heroi.itens[i] == 'e')
                    {
                        Heroi.stts.ataque += 5;
                    }
                    else if (Heroi.itens[i] == 'p')
                    {
                        Heroi.stts.vida += 5;
                    }
                   
                    Heroi.itens[i] = 0;
                    break;
                }
            }
        }

        if (Vilao.stts.vida <= 0)
        {
            printf(HEROI_VENCEU, Heroi.stts.vida);
            return 0;
        }

        scanf("%d", &acaoV);
        if (acaoV == 1)
        {
            dano = Vilao.stts.ataque - Heroi.stts.defesa;
            if (dano < 1) dano = 1;
            Heroi.stts.vida -= dano;
        }
        else if (acaoV == 2)
        {
            if (Vilao.stts.magia > 0)
            {
                Heroi.stts.vida -= 3;
                Heroi.stts.defesa -= 3;
                Vilao.stts.magia -= 1;
                if (Heroi.stts.defesa < 0) Heroi.stts.defesa = 0;
            }
        }
        else if (acaoV == 3)
        {
            scanf(" %c", &useItem);
            for (i = 0; i < Vilao.qtdItens; i++)
            {
                if (useItem == Vilao.itens[i])
                {
                    if (Vilao.itens[i] == 'e')
                    {
                        Vilao.stts.ataque += 5;
                    }
                    else if (Vilao.itens[i] == 'p')
                    {
                        Vilao.stts.vida += 5;
                    }
                  
                    Vilao.itens[i] = 0;
                    break;
                }
            }
        }

        if (Heroi.stts.vida <= 0)
        {
            printf(VILAO_VENCEU, Vilao.stts.vida);
            return 0;
        }
    }

    return 0;
}
