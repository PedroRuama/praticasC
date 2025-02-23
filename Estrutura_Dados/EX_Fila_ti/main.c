#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

char ReadInput();
int DoOperation(Queue* queue, char operation);

int main(){
    Queue* queue = CreateQueue(5);
    
    printf("Comandos:\ni: insere valor na fila\nexemplos: i x, i 3, i #\nr: remove da fila\np: imprime a fila\nq: destroi a fila e sai do programa\n\n");
    
    while(DoOperation(queue, ReadInput()));
    
    Destroy(queue);
    
    return 0;
}

char ReadInput(){
    char input[100];
    scanf("%s", input);
    return input[0];
}

int DoOperation(Queue* queue, char operation){
    char removed;
    char result[100] = {0};
    switch(operation){
        case 'q': return 0;
        
        case 'i':
        printf("%s\n", Insert(queue, ReadInput()) ? "inseriu!" : "fila cheia!");
        return 1;
        
        case 'r':
        if(Remove(queue, &removed)) printf("removeu %c\n", removed);
        else printf("fila vazia!\n");
        return 1;
        
        
        case 'p':
        ReadQueue(queue, result);
        printf("fila: %s\n", result);
        return 1;
        
        default: return 1;
    }
}