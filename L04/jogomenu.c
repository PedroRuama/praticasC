#include <stdio.h>

int main()
{
    int Menu = 1, Config, opMenu, opConfig;
    int Volume, Brilho, Jogador1, Jogador2, nj1, nj2, resultado;

    printf("Bem-vindo ao nosso jogo! Escolha uma opcao:\n");

    do
    {
        printf("1. Iniciar jogo\n");
        printf("2. Configuracoes\n");
        printf("3. Sair\n");
        printf("Digite a opcao desejada:\n");
        scanf("%d", &opMenu);
        switch (opMenu)
        {
        case 1:
            printf("Jogador 1 sera par ou impar:\n");
            scanf("%d", &Jogador1);

            printf("Numero do jogador 1:\n");
            scanf("%d", &nj1);
            printf("Numero do jogador 2:\n");
            scanf("%d", &nj2);
            resultado = (nj1 + nj2) % 2;
            if (resultado == 0)
            {
                if (Jogador1 == 0)
                {
                    printf("Jogador 1 ganhou!\n");
                }
                else
                {
                    printf("Jogador 2 ganhou!\n");
                }
            }
            else if (resultado > 0)
            {
                if (Jogador1 == 1)
                {
                    printf("Jogador 1 ganhou!\n");
                }
                else
                {
                    printf("Jogador 2 ganhou!\n");
                }
            }
            break;
        case 2:
            Config = 1;
            do
            {
                printf("Menu de Configuracoes:\n");
                printf("1. Ajustar volume\n");
                printf("2. Ajustar brilho\n");
                printf("3. Voltar\n");
                printf("Digite a opcao desejada:\n");
                scanf("%d", &opConfig);

                switch (opConfig)
                {
                case 1:
                    printf("Insira o volume desejado:\n");
                    scanf("%d", &Volume);
                    printf("Volume ajustado para: %d\n", Volume);
                    break;
                case 2:
                    printf("Insira o brilho desejado:\n");
                    scanf("%d", &Brilho);
                    printf("Brilho ajustado para: %d\n", Brilho);
                    break;
                case 3:
                    Config = 0;
                    break;

                default:
                    break;
                }
            } while (Config);

            break;

        case 3:
            Menu = 0;
            break;
        default:
            break;
        }
    } while (Menu);

    return 0;
}