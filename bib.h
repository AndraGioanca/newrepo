#ifndef bib_h
#define bib_h
#include<stdio.h>
#include<stdlib.h>

typedef char Data;
typedef struct Node {
    int val;
    struct Node* next;
} Node;

typedef struct Stack {
    Node* top;
} Stack;
Data top(Node *top);
void push(Node**top, Data v);
Data pop(Node**top);
int isEmpty(Node*top);
void deleteStack(Node**top);

#endif // lista
