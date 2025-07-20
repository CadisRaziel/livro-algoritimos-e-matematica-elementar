/*
Elaborar um programa que leia uma matriz A do tipo vetor com 15 elementos inteiros. Construir
uma matriz 8 de mesmo tipo, e cada elemento da matriz 8 deve ser o resultado da fatorial
correspondente de cada elemento da matriz A. Apresentar as matrizes A e 8. 
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD_ELEMENTOS 15

int fatorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main(){
    int *numeros_input_matriz = malloc(QTD_ELEMENTOS * sizeof(int));
    int *numero_resultado_matriz = malloc(QTD_ELEMENTOS * sizeof(int));

    for(int i = 0; i < QTD_ELEMENTOS; i++) {
        printf("Digite os numeros da matriz[%d]: ", i);
        scanf("%d", &numeros_input_matriz[i]);
    }

    for(int j = 0; j < QTD_ELEMENTOS; j++) {
        numero_resultado_matriz[j] = numeros_input_matriz[j];
        int resultado = fatorial(numero_resultado_matriz[j]);
        printf("\nResultado da matriz numeros input fatorial: \n");
        printf("%d! = %d\n", numero_resultado_matriz[j], resultado);
    }
    printf("\n");


    free(numeros_input_matriz);
    free(numero_resultado_matriz);
}