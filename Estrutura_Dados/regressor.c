#include <stdio.h> 


void contador(int x){
    if (x)
    {
        printf("%d\n", x);
        contador(x-1);
    }
    
}


int main(){
    int n;

    scanf("%d", &n);

    contador(n);

}