#include <stdio.h>

#define KRESTEL_DESTRUIDA "Krestel foi destruída!\n"
#define KRESTEL_OXIGENIO "O Oxigênio acabou!\n"
#define DRONE_DESTRUIDO "O Drone foi destruído!\n"
#define DRONE_ESCAPOU "O Drone escapou!\n"
#define KRESTEL_ESCAPOU "Krestel escapou!\n"
#define TURNO_ENCERRADO "Turno encerrado!\n"

int main()
{

    int NC_krestel = 5, NC_drone = 4, CE_krestel, CE_drone, setor;

    int batalha = 1, CE_distrubuido, pontos_alocados, pontos_alocadosD, drone_propulsao = 0, 
    krestel_propulsao = 0, O2_krestel = 4, escudo_krestel = 0, danoDrone;

    while (batalha)
    {
        CE_krestel = 8;
        CE_drone = 5;
        escudo_krestel = 0;

        for (; CE_krestel > 0;)
        {

            scanf("%d %d", &setor, &CE_distrubuido);

            for (int i = 1, P = CE_distrubuido; P > 0; i++)
            {
                pontos_alocados = i;
                P -= i;
            }

    
            switch (setor)
            {
            case 1:
                NC_drone -= pontos_alocados;
                
                break;

            case 2:
                escudo_krestel += pontos_alocados;
                break;

            case 3:
                O2_krestel += pontos_alocados;
                break;
            case 4:
                krestel_propulsao += pontos_alocados;
                break;

            default:
                break;
            }

            CE_krestel -= CE_distrubuido;

    
        }
        danoDrone = 4 - NC_drone;

        for (int i = 1, P = danoDrone; P > 0; i++){
                pontos_alocadosD = i;
                P -= i;
            }

        drone_propulsao += pontos_alocadosD;

        CE_drone -= danoDrone;

        for (int i = 1, P = CE_drone; P > 0; i++){
                pontos_alocadosD = i;
                P -= i;
            }

        for (int i = 0; i < pontos_alocadosD; i++){
    
            if (escudo_krestel == 0){
                NC_krestel--;
                NC_drone++;
            } else{
                escudo_krestel--;
            }
        }


        printf(TURNO_ENCERRADO);

                
        O2_krestel--;

        if (NC_krestel < 0)
        {
            printf(KRESTEL_DESTRUIDA);
            batalha = 0;
        }
        else if (NC_drone < 0)
        {
            printf(DRONE_DESTRUIDO);
            batalha = 0;
        }
        else if (drone_propulsao >= 5)
        {
            printf(DRONE_ESCAPOU);
            batalha = 0;
        }
        else if (O2_krestel < 0)
        {
            printf(KRESTEL_OXIGENIO);
            batalha = 0;
        }
        else if (krestel_propulsao >= 5)
        {
            printf(KRESTEL_ESCAPOU);
            batalha = 0;
        }
    }

    return 0;
}