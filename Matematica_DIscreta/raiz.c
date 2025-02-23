#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct R
{
    int val;
    unsigned long long val_f;
    unsigned long long raiz;
}Rdados;

typedef struct raiz
{
    int grau;
    Rdados a; // f(a)
    Rdados b; // f(b)
    int fun_ints[]; // Array flexível para armazenar os coeficientes
} Raiz;

unsigned long long fastPow(int base, int exp) {
    unsigned long long resultado = 1;
    unsigned long long b = base;
    while (exp > 0) {
        if (exp % 2 == 1) { 
            resultado *= b;
        }
        b *= b;
        exp /= 2;
    }
    return resultado;
}

int main()
{
    int grau;
    
    scanf("%d", &grau);

    // Alocar memória para a struct e para o array flexível
    Raiz *f = (Raiz *)malloc(sizeof(Raiz) + (grau+1) * sizeof(int));
    f->grau = grau;

    for (int i = 0; i <= f->grau; i++)
    {
        scanf("%d", &f->fun_ints[i]); 
    }

    scanf("%d %d", &f->a.val, &f->b.val);

    f->a.val_f = 0;
    f->b.val_f = 0;

    for (int i = f->grau, j=0; i >= 0; i--, j++)
    {
        
        f->a.val_f += f->fun_ints[j]*fastPow(f->a.val, i); 
        f->b.val_f += f->fun_ints[j]*fastPow(f->b.val, i);
    }

    printf("val a: %llu\n", f->a.val_f);
    printf("val b: %llu\n", f->b.val_f);
    

  
   
    free(f);

    return 0;
}
