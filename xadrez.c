#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int torre = 1; //variavel torre

    printf("Torre move: \n"); //Indetificação peça

    while (torre <= 5) { //Torre move 4 vezes para direita

            printf("Direita\n"); //Saída movimento no console
        
        torre++; //+1 incremento 
    }


    int bispo = 1; //variavel bispo

    printf("\n\nBispo move: \n"); //Indetificação peça

    do {

        printf("Cima, Direita \n"); //Saída movimento no console
        bispo++; //+1 incremento

    } while (bispo <= 5); //Bispo move 4 vezes para direita

    printf("\n\nRainha move: \n"); //Indetificação peça

    for (int rainha = 1; rainha <= 8; rainha++) { //Declaração variavel, Rainha move 7 vezes para direita, +1 incremento
        printf("Esquerda\n"); //Saída movimento no console
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
