#include <stdio.h>

struct Comodo {
    char tipo;
    float largura;
    float comprimento;
};

// Função para calcular a quantidade de lampadas necessarias
int calcularLampadasNecessarias(struct Comodo c);

/* ===== A FUNCAO MAIN() JA ESTA PRONTA! ===== */
 int main() {
     struct Comodo c;

     //ler as caracteristicas do cômodo
     scanf("%c", &c.tipo);
     scanf("%f", &c.largura);
     scanf("%f", &c.comprimento);

     //a função deve retornar a quantidade lampadas
     int quantidadeLampadas = calcularLampadasNecessarias(c);

     //exibir na tela a quantidade lampadas
     if (quantidadeLampadas != -1) {
         printf("Quantidade de lampadas necessarias: %d\n", quantidadeLampadas);
     }

     return 0;
 }
/* <===== ATE AQUI ===== */


int calcularLampadasNecessarias(struct Comodo c) {
   int lampadas;
   float m2 = c.comprimento*c.largura, w;

   switch (c.tipo)
   {
   case 'Q':
        w = m2*12;
        lampadas = w/60;
        if ((int)w%60 != 0)
        {
            lampadas+=1;
        }
    break;
   case 'S':
        w = m2*15;
        lampadas = w/60;
        if ((int)w%60 != 0)
        {
            lampadas+=1;
        }
    break;
   case 'C':
        w = m2*18;
        lampadas = w/60;
        if ((int)w%60 != 0)
        {
            lampadas+=1;
        }
    break;
   case 'B':
        w = m2*10;
        lampadas = w/60;
        if ((int)w%60 != 0)
        {
            lampadas+=1;
        }
    break;
  
   default:
    break;
   }

    return(lampadas);
   
}

