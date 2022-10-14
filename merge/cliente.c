#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    
    if (argc <= 1) {
        printf("Tá faltando o tamanho do vetor aí!\n");
        return EXIT_FAILURE;
    }

    // LÊ ENTRADA E CRIA ARRAY //
    int n;
    sscanf(argv[1], "%d", &n);
    printf("%d\n", n);
    long int * array = (long int*) malloc(sizeof(long int) * n);

    for (int i = 0; i < n; i++){
        scanf("%ld", &array[i]);
    }
    // ======================= //

    free(array);

    return 0;
}
