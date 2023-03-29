#include "lstque.h"



// Functie pentru eliminarea unui element din stiva
int pop() {
    int x;
    if (varf == -1) {
        printf("Stiva este goala.\n");
        return -1;
    } else {
        x = stiva[varf];
        varf--;
        return x;
    }
}

// Functie pentru adaugarea unui element in coada
void enqueue(int x) {
    if (ultimul == MAX_SIZE - 1) {
        printf("Coada este plina.\n");
    } else {
        ultimul++;
        coada[ultimul] = x;
    }
}

// Functie pentru eliminarea unui element din coada
int dequeue() {
    int x;
    if (primul > ultimul) {
        printf("Coada este goala.\n");
        return -1;
    } else {
        x = coada[primul];
        primul++;
        return x;
    }
}

// Functie pentru inversarea elementelor din coada folosind o stiva
void inverseaza_coada_cu_stiva() {
    while (primul <= ultimul) {
        push(dequeue());
    }
    while (varf != -1) {
        enqueue(pop());
    }
}

// Functie pentru afisarea elementelor din coada
void afiseaza_coada() {
    int i;
    printf("Coada: ");
    for (i = primul; i <= ultimul; i++) {
        printf("%d ", coada[i]);
    }
    printf("\n");
}
