#include <stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
#include "bib.h"

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
    Node* top;
    Data v;
    push(&top,v);
    pop(top);
    return 0;
}

