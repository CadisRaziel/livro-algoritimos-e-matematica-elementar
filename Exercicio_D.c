/*
Elaborar um programa que leia 15 elementos inteiros de uma matriz A do tipo vetor. Construir
uma matriz 8 de mesmo tipo, observando a seguinte lei de formação: "todo elemento da matriz
8 deve ser o quadrado do elemento da matriz A correspondente". Apresentar os elementos das
matrizes A e 8. 
*/

#include <stdio.h>
#include <stdlib.h>

#define QTD_ELEMENTO 15

int main (){
    int *numeros_input_matriz = malloc(QTD_ELEMENTO * sizeof(int));
    int *numeros_resultado_matriz = malloc(QTD_ELEMENTO * sizeof(int));

    for(int i = 0; i < QTD_ELEMENTO; i++) {
        printf("Digite os numeros da matriz[%d]: ", i);
        scanf("%d", &numeros_input_matriz[i]);
    }

    for(int j = 0; j < QTD_ELEMENTO; j++) {
        numeros_resultado_matriz[j] = numeros_input_matriz[j] * numeros_input_matriz[j];
    }

    printf("\nResultado da matriz numeros input ao quadrado: \n");
    for(int r = 0; r < QTD_ELEMENTO; r++) {
        printf("%d", numeros_resultado_matriz[r]);
    }
    printf("\n");

    //Lib stdlib.h para dar free
    free(numeros_input_matriz);
    free(numeros_resultado_matriz);

    return 0;
}
