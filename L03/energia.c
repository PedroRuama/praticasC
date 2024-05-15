#include <stdio.h>


#define TARIFA_B 0.429
#define BANDEIRA_Y 0.996
#define BANDEIRA_R 4.599
#define BANDEIRA_D 7.571


int main(){
    
    int kWh, sobra;
    char bandeira;
    double val;

    scanf("%d\n", &kWh);
    scanf("%c\n", &bandeira);
  

    switch (bandeira){
    case 'G':
        val = kWh * TARIFA_B;

        break;
    
    case 'Y':
        val = kWh * TARIFA_B;
        sobra = kWh/100;
        val += sobra * BANDEIRA_Y;

        break;
    
    case 'R':
        val = kWh * TARIFA_B;
        sobra = kWh/100;
        val += sobra * BANDEIRA_R;

        break;
    
    case 'D':
        val = kWh * TARIFA_B;

        sobra = kWh/100;
        val += sobra * BANDEIRA_D;
        
        break;
    
    default:
        break;
    }


    if (kWh >=0 && kWh <=40)   {
       printf("R$ %.2lf\n", val);
       exit(0);
    }
    
    else if (kWh >=41 && kWh <=100){
        val += val*0.07;
        
    }else if (kWh >=101 && kWh <=250){
        val += val*0.11;
        
    }else if (kWh > 250){
        val += val*0.15;
        
    } else{
       printf("R$ %.2lf\n", val);
       exit(0);
    }

    printf("R$ %.2lf\n", val);

    return 0;
    
    
}