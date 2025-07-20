#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
<<<<<<<<<<<<<<<<<<<<EXERCICIO>>>>>>>>>>>>>>>>>>>>
Elaborar um programa que efetue a leitura de dez nomes de pessoas em uma matriz A do tipo
vetor e apresente-os em seguida.
*/

#define QTD_NOMES 10 //-> define quantos nomes você quer ler (10 no total).
#define TAM_MAX_NOME 100 //-> é o tamanho máximo que aceitamos por nome (99 caracteres + 1 para \0).

int main() {
    //-> char **nomes é um vetor de ponteiros para char, ou seja, um vetor de strings.   
    //-> malloc(QTD_NOMES * sizeof(char*)) reserva espaço para 10 ponteiros (um para cada nome).
    char **nomes = malloc(QTD_NOMES * sizeof(char*)); 

    //-> se o nome for null encerra o programa.
    if (nomes == NULL) {
        printf("Erro ao alocar memória para os nomes.\n");
        return 1;
    }

    //-> Para cada índice de 0 a 9:
    //-> Reservamos memória para guardar até 100 caracteres.
    //-> Ou seja, nomes[0], nomes[1], etc... serão strings separadas.
    //-> Exemplo: imagine 10 gavetas, e cada uma vai guardar um nome de até 100 letras.
    for (int i = 0; i < QTD_NOMES; i++) {
        nomes[i] = malloc(TAM_MAX_NOME * sizeof(char)); //-> alocando espaço para cada nome (AQUI EU INSIRO O NOME)

        //-> se o nome for null encerra o programa.
        if (nomes[i] == NULL) {
            printf("Erro ao alocar memória para o nome %d.\n", i);
            return 1;
        }

        //-> Lê a linha inteira com espaços (diferente de scanf).
        //-> Exemplo de entrada válida: Maria da Silva
        //-> Aqui é o input tipo Console.WriteLine("Digite o nome"), vai pegar o indice e ir somando mais 1
        printf("Digite o nome %d: ", i + 1);

        //-> Lendo os nomes com fgets
        //-> Quando eu digitar um nome, ele vai ficar armazenado tipo "Vitor"
        //-> Leia o que o usuário digitar (do teclado) e guarde dentro da string nomes[i]
        fgets(nomes[i], TAM_MAX_NOME, stdin);

        //-> Remove o caractere de nova linha '\n' se ele existir
        //-> fgets inclui o \n no final (quando você aperta Enter).
        //-> strcspn acha onde está o \n e a gente troca ele por \0 (fim da string).
        //-> Isso é só para não mostrar uma linha em branco depois.
        //-> {'V', 'i', 't', 'o', 'r', '\n', '\0'}
        //-> \n é o caractere da tecla ENTER
        //-> \0 é o terminador da string, usado em C para dizer "aqui acaba a string"
        nomes[i][strcspn(nomes[i], "\n")] = '\0'; //-> Isso troca o \n por \0, ficando assim: {'V', 'i', 't', 'o', 'r', '\0'}
    }

    //->  Mostrando os nomes
    printf("\nOs nomes digitados foram:\n");

    //-> Percorremos de novo os nomes e mostramos cada um.
    for (int i = 0; i < QTD_NOMES; i++) {

        //-> O %d é para mostrar o número (posição do nome).
        //-> O %s é para mostrar a string salva.
        printf("%d. %s\n", i + 1, nomes[i]);

        //-> libera a memória de cada nome
        free(nomes[i]); 
    }

    //-> libera o array de ponteiros
    free(nomes); 
    return 0;
}