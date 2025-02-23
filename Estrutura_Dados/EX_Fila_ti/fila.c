#include <stdlib.h>
#include <string.h>
#include "fila.h"

Queue* CreateQueue(int max){
    Queue* queue = malloc(sizeof(Queue));
    
    queue->start = 0;
    queue->last = 0;
    queue->max = max;
    queue->amount = 0;
    
    return queue;
}

int Insert(Queue* queue, char value){
    if(queue->amount == queue->max) return 0;
    
    Node* new_node = malloc(sizeof(Node));
    
    new_node->next = 0;
    new_node->data = value;
    
    queue->amount++;
    
    if(!queue->start){
        queue->start = new_node;
        queue->last = new_node;
        
        return 1;
    }
    
    queue->last->next = new_node;
    queue->last = new_node;
    
    return 1;
}

int Remove(Queue* queue, char* result){
    if(!queue->start) return 0;
    
    if(result) *result = queue->start->data;
    
    Node* old_start = queue->start;
    queue->start = queue->start->next;
    free(old_start);
    
    queue->amount--;
    
    if(!queue->start) queue->last = 0;
    
    return 1;
}

void Destroy(Queue* queue){
    while(Remove(queue, 0));
    free(queue);
}

void ReadQueue(Queue* queue, char* result){
    Node* iterator = queue->start;
    for(int i = 0; iterator; i++){
        result[i] = iterator->data;
        iterator = iterator->next;
    }
}
