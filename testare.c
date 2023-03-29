#include <stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
#include "lstque.h"


int stiva[MAX_SIZE];
int varf = -1;

int coada[MAX_SIZE];
int primul = 0;
int ultimul = -1;
typedef struct Node {
    int val;
    struct Node* next;
} Node;

typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

typedef struct Stack {
    Node* top;
} Stack;

Stack* createStack() {
    Stack* s = (Stack*)malloc(sizeof(Stack));
    if (s == NULL) {
        return NULL;
    }
    s->top = NULL;
    return s;
}
int main()
{
    Queue q = {NULL, NULL};
    // Adaugam cateva elemente in coada pentru a le inversa
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    afiseaza_coada(); // Coada: 1 2 3 4 5

    inverseaza_coada_cu_stiva();

    afiseaza_coada(); // Coada: 5 4 3 2 1

    return 0;
}
