#include <stdio.h>

// #define MENSAGEM "O herrique ganho no chess"

int main(){

  int a, i, cont;
  printf("(0 finalizar) Digite os valores:\n");
  do{
      scanf("%d",&a);
      i=i*a;
      cont++;
  }while(a !=0);

  printf("termos:%d. produto:%d.",cont,i);
  
  

  return 0;


}