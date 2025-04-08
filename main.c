#include <stdio.h>
#include "module.h"

int main() {
    Contenitore c;
    int dimensione = 5;
    
    // Allocazione dinamica di un array di 5 interi
    c.numeri = (int *)malloc(dimensione * sizeof(int));
    if (c.numeri == NULL) {
        printf("Errore di allocazione memoria.\n");
        return 1;
    }
    
    // Inserimento dei valori
    printf("Inserisci 5 numeri interi:\n");
    for (int i = 0; i < dimensione; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &c.numeri[i]);
    }
    
    //push(dimensione, c.numeri);
    //pop(dimensione, c.numeri);
    //peek(dimensione, c.numeri);
    isEmpty(dimensione, c.numeri);
    isFull(dimensione, c.numeri);

    // Stampa dei valori
    printf("Hai inserito:\n");
    for (int i = 0; i < dimensione; i++) {
        printf("%d ", c.numeri[i]);
    }
    printf("\n");
}