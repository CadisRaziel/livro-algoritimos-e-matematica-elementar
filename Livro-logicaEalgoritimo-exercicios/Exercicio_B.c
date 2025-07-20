/*
Elaborar um programa que leia oito elementos inteiros em uma matriz A do tipo vetor. Construir
uma matriz 8 de mesma dimensão com os elementos da matriz A multiplicados por 3.
O elemento 8[1] deve ser implicado pelo elemento A[1] * 3, o elemento 8[2] implicado pelo
elemento A[2] * 3 e assim por diante, até 8. Apresentar a matriz 8
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define QTD_ELEMENTOS 8



int main() {
    int *numeros_primeira_matriz = malloc(QTD_ELEMENTOS * sizeof(int));
    int *numeros_segunda_matriz  = malloc(QTD_ELEMENTOS * sizeof(int));

    if(numeros_primeira_matriz == NULL ) {
        printf("Erro ao alocar memória para as matrizes.\n");
        return 1;
    }

    //################## PRIMEIRA MATRIZ ##################
    for(int i = 0; i < QTD_ELEMENTOS; i++){
    printf("Digite o valor para numeros_primeira_matriz[%d]: ", i); //-> Le um numero inteiro e guarda na posição i
    scanf("%d", &numeros_primeira_matriz[i]);
    }

    //Atribuindo os valores da primeira matriz a segunda matriz
    for(int i = 0; i < QTD_ELEMENTOS; i++) {
        numeros_segunda_matriz[i] = numeros_primeira_matriz[i] * 3;
    }

    //-> Exibir os valores apos atribuir na matriz
    printf("\nValores armazenados na segunda matriz (primeira matriz x 3):\n");
    for(int i = 0; i < QTD_ELEMENTOS; i++) {
        printf("%d ", numeros_segunda_matriz[i]);
    }
    printf("\n");
    //################## PRIMEIRA MATRIZ ##################
   


    //-> Sempre libere os espaços
    free(numeros_primeira_matriz);
   

    return 0;

}