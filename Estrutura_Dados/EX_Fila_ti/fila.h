/* date = January 24th 2025 1:14 pm */

#ifndef FILA_H
#define FILA_H

typedef struct _node {
    char data;
    struct _node *next;
} Node;

typedef struct {
    Node* start;
    Node* last;
    int max;
    int amount;
} Queue;

Queue* CreateQueue(int max);
int Insert(Queue* queue, char value);
int Remove(Queue* queue, char* result);
void Destroy(Queue* queue);
void ReadQueue(Queue* queue, char* result);

#endif //FILA_H
