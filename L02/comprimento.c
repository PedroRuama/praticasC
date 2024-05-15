#include <stdio.h>

int main(){
    double metros, pes, polegadas, jardas, milhas;

    scanf("%lf", &metros);

    pes = metros/0.3048;
    polegadas = metros/0.0254;
    jardas = metros/0.9144;;
    milhas = metros/1609;



    printf("%.1lf\n", pes);
    printf("%.1lf\n", polegadas);
    printf("%.1lf\n", jardas);
    printf("%.1lf\n", milhas);


    return 0;
}