#include <stdio.h>

#define COMPROU "%d item(ns) comprado(s) com sucesso!\nDinheiro restante: %d (gastou %d).\n\n"
#define SEM_DINHEIRO "Sem dinheiro suficiente!\nTem %d mas precisa de %d (%d faltando).\n\n"
#define DEPOSITADO "%d depositado(s)!\nDinheiro total: %d.\n\n"
#define COMANDO_INVALIDO "Comando invalido!\n\n"
#define ITEM_INVALIDO "Item invalido!\n\n"

int main()
{
    int caixa = 0;
    int sair = 0;
    char acao, acao_, item, item_;
    int deposito, quantidade;
    int invalido, invalido2 = 0, verificAcao, verificItem;
    int confirmAcao, confirmItem = 1, totalCompra;

    do
    {
        confirmAcao = 1;
        confirmItem = 1;
        invalido = 0;
        verificAcao = 0;
        verificItem = 0;
        do
        {
            scanf("%c", &acao);

            if (confirmAcao == 1)
            {
                acao_ = acao;
                confirmAcao = 0;
            }

            if (acao == ' ' || acao == '\n')
            {
                verificAcao = 1;
            }

            if (acao >= 'A' && acao <= 'Z')
            {
                invalido = 1;
            }
        } while (!verificAcao); // Repete enquanto a ação não for um espaço

        if (!invalido)
        {
            switch (acao_)
            {
            case 'd':
                scanf("%d%*c", &deposito);
                caixa += deposito;
                printf(DEPOSITADO, deposito, caixa);
                break;
            case 'c':

                scanf("%d%*c", &quantidade);

                do
                {
                    scanf("%c", &item);

                    if (confirmItem == 1)
                    {
                        item_ = item;
                        confirmItem = 0;
                    }

                    if (item == '\n')
                    {
                        verificItem = 1;
                    }

                    if (item >= 'A' && item <= 'Z')
                    {
                        invalido2 = 1;
                    }

                } while (!verificItem);

                if (!invalido2)
                {
                  
                    switch (item_)
                    {
                    case 'w':
                        totalCompra = 12 * quantidade;
                        if (caixa - totalCompra < 0)
                        {
                            printf(SEM_DINHEIRO, caixa, totalCompra, totalCompra - caixa);
                        }
                        else
                        {
                            caixa -= totalCompra;
                            printf(COMPROU, quantidade, caixa, totalCompra);
                        }

                        break;
                    case 'l':
                        totalCompra = 15 * quantidade;
                        if (caixa - totalCompra < 0)
                        {
                            printf(SEM_DINHEIRO, caixa, totalCompra, totalCompra - caixa);
                        }
                        else
                        {
                            caixa -= totalCompra;
                            printf(COMPROU, quantidade, caixa, totalCompra);
                        }

                        break;

                    case 'p':
                        totalCompra = 30 * quantidade;
                        if (caixa - totalCompra < 0)
                        {
                            printf(SEM_DINHEIRO, caixa, totalCompra, totalCompra - caixa);
                        }
                        else
                        {
                            caixa -= totalCompra;
                            printf(COMPROU, quantidade, caixa, totalCompra);
                        }

                        break;
                    case 'c':
                        totalCompra = 60 * quantidade;
                        if (caixa - totalCompra < 0)
                        {
                            printf(SEM_DINHEIRO, caixa, totalCompra, totalCompra - caixa);
                        }
                        else
                        {
                            caixa -= totalCompra;
                            printf(COMPROU, quantidade, caixa, totalCompra);
                        }

                        break;
                    case 'j':
                        totalCompra = 700 * quantidade;
                        if (caixa - totalCompra < 0)
                        {
                            printf(SEM_DINHEIRO, caixa, totalCompra, totalCompra - caixa);
                        }
                        else
                        {
                            caixa -= totalCompra;
                            printf(COMPROU, quantidade, caixa, totalCompra);
                        }

                        break;

                    default:
                        printf(ITEM_INVALIDO);
                        break;
                    }
                }
                else
                {
                    printf(ITEM_INVALIDO);
                }
                break;
            case 's':
                sair = 1;
                break;
            default:
                printf(COMANDO_INVALIDO);
                break;
            }
        }
        else
        {
            printf(COMANDO_INVALIDO);
        }

    } while (!sair);

    return 0;
}
