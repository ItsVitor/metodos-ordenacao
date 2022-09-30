#include "item.h"
#include <stdlib.h>
#include <stdio.h>

// Todos os algoritmos devem implementar a sua
// função de ordenação segundo esse cabeçalho
extern void sort(Item * a, int lo, int hi);

void PrintArray(Item * a, int N){
    for (int i = 0; i < N; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(){

    int N;
    printf("Informe o numero de itens a serem lidos:\n");
    scanf("%d", &N);

    printf("Informe os números:\n");
    Item * array = (Item*) malloc(sizeof(Item) * N); 
    for (int i = 0; i < N; i++){
        scanf("%d", &array[i]);
    }

    printf("Array antes:\n");
    PrintArray(array, N);

    // Algoritmo de Ordenação
    sort(array, 0, N);

    printf("Array depois:\n");
    PrintArray(array, N);

    free(array);

    return 0;
}