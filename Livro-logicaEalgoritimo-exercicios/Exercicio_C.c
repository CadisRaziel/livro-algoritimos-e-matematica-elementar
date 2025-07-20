/*
Escrever um programa que leia duas matrizes (denominadas A e 8) do tipo vetor com
20 elementos reais. Construir uma matriz C, sendo cada elemento da matriz C a subtração de
um elemento correspondente da matriz A com um elemento correspondente da matriz 8, ou
seja, a operação de processamento deve estar baseada na operação C[I] +- A[I] - 8[1]. Ao final,
apresentar os elementos da matriz C
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD_ELEMENTOS 20

int main () {
    int *numeros_primeira_matriz = malloc(QTD_ELEMENTOS * sizeof(int));
    int *numeros_segunda_matriz = malloc(QTD_ELEMENTOS * sizeof(int));
    int *numeros_terceira_matriz = malloc(QTD_ELEMENTOS * sizeof(int));

    if(numeros_primeira_matriz == NULL || numeros_segunda_matriz == NULL || numeros_terceira_matriz == NULL) {
        printf("Erro ao alocar memória para as matrizes.\n");
        return 1;
    }

    //Primeira matriz
    for(int p = 0; p < QTD_ELEMENTOS; p++) {
        printf("Digite 20 numeros_primeira_matriz[%d]: ", p);
        scanf("%d", &numeros_primeira_matriz[p]);
    }

    for(int s = 0; s < QTD_ELEMENTOS; s++) {
        printf("Digite 20 numeros_segunda_matriz[%d]: ", s);
        scanf("%d", &numeros_segunda_matriz[s]);
    }

    for(int t = 0; t < QTD_ELEMENTOS; t++) {
        numeros_terceira_matriz[t] = numeros_primeira_matriz[t] - numeros_segunda_matriz[t]; 
    }

    printf("\nResultado valor da terceira matriz:\n");
    for(int r = 0; r < QTD_ELEMENTOS; r++) {
        printf("%d", numeros_terceira_matriz[r]);
    }
    printf("\n");


    free(numeros_primeira_matriz);
    free(numeros_segunda_matriz);
    free(numeros_terceira_matriz);

    return 0;
}