#include "item.h"

void troca(Item * a, int i, int j){
    Item aux = a[i];
    a[i] = a[j];
    a[j] = aux;
}

void sort(Item * a, int lo, int hi){
    for (int i = lo; i < hi; i++){
        int menor_pos = i;
        for (int j = i + 1; j < hi; j++){
            if (a[j] < a[menor_pos]) menor_pos = j; 
        }
        troca(a, menor_pos, i);
    }
}