#ifndef MODULE_H
#define MODULE_H

typedef struct {
    int *numeri;  // Puntatore a array dinamico
} Contenitore;

int push(int dim, int arr[]) {
    int n;
    int copia[dim];
    
    printf("Che numero vuoi inserire in cima allo stack?:");
    scanf("%d", &n);
    
    // Sposta tutti gli elementi verso destra
    for (int i = dim - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = n;
    
    return arr;
} //inserisce un intero in cima allo stack

int pop(int dim, int arr[]) {
    // Spostiamo tutto a sinistra, sovrascrivendo il primo elemento
    for (int i = 0; i < dim; i++) {
        arr[i] = arr[i + 1];
    }

} //rimuove l’elemento in cima allo stack.

int peek(int dim, int arr[]) {
    printf("Prima posizione: %d\n", arr[0]);
    
    return arr[0];
} //restituisce l’elemento in cima allo stack senza rimuoverlo.

void isEmpty(int dim, int arr[]) {
    if(arr[0] == NULL) {
        printf("Array vuoto.\n");
    }
}
    
void isFull(int dim, int arr[]) {
    if(arr[dim - 1] != 0) {
        printf("Array pieno.\n");
    }
} //controllano lo stato dello stack (es. underflow, overflow).

#endif