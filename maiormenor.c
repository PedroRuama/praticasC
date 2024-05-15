#include <stdio.h>
int main()
{
    int count,num,a,med,mai,min,p;

    printf("Escreva 5 valores inteiros \n");
    do{
        count++;
        scanf("%d",&a);
        num=num+a;
        if (a < min){
            min=a;
        }
        else if(a > mai){
            mai=a;
        }
        if ((a % 2)==0){
            p++;
        }
    }
    while(count<5);
    med=num/5;
    printf("O menor valor eh %d\n o maior valor eh %d\n a media dos numeros lidos eh %d\n e existem %d numeros pares.",min,mai,med,p);
    
    return 0;
}