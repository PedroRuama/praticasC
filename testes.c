#include <stdio.h>
typedef struct {
    int espresso[10];
    int americano;
} CAFE;

int main(){
    int A=1, B=3;
    printf("%d\n", capuccino(A, B));
}


int capuccino(int A, int B){
    int C = 0, D = 0;
    CAFE cafezinho;
    cafezinho.americano = 0;
    
    for (int i = 0; i < 10; i++){
        cafezinho.espresso[i] = (A + i) - B;
        if (cafezinho.espresso[i] % 2 == 0)
            cafezinho.americano += cafezinho.espresso[i];
    }
    
    D = cafezinho.espresso[A] + cafezinho.espresso[B];
    
    if (cafezinho.espresso[A] > cafezinho.espresso[B])
        C = cafezinho.espresso[A - B] + cafezinho.americano - D;
    else
        C = cafezinho.espresso[B - A] + cafezinho.americano - D;
    
    return (C + cafezinho.americano); 
}