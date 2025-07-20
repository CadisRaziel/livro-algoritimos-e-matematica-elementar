#include <stdio.h>
#include <stdbool.h> //Para incluir variavel booleana

//Exercicios de proposição

int main() {
    
    //1. Diga se as frases abaixo são proposições (S/N). Se sim, diga o valor lógico (V/F):

    //a) "Hoje é sexta-feira.
    bool ehSexta = true;
    if(ehSexta){
        printf("Sim é sexta feira\n");
    } else {
        printf("Não é sexta feira\n");
    }   
    
    //b) "Estude para a prova!"
    //R: não é uma proposição
    
    
    //c) "3 + 2 = 5"
    int calculo = 3 + 2;
    if(calculo == 5) {
        printf("verdadeiro\n");
    } else {
        printf("falso\n");
    }
    
    
    //d) "Você vai ao cinema?"
    bool vaiNoCinema = true;
    if(vaiNoCinema) {
        printf("Sim eu vou\n");        
    } else {
        printf("Não vou\n");   
    }


    //2. Faça a negação das proposições:
    //a) p: "O número 7 é par"
    int numeroSete = 7;
    if(numeroSete % 2 == 0) {
        printf("Sim é numero par\n");
    } else {
        printf("Não é numero par");
    }

    //b) q: "A Terra gira em torno do Sol"
    //R: Afirmação

    return 0;
    

}