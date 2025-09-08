#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int torre = 1; //variavel torre

    printf("Torre move: \n");

    while (torre <= 5) {

            printf("Direita\n"); //Torre move 5 vezes para direita
        
        torre++; //incremento
    }


    int bispo = 1;

    printf("\n\nBispo move: \n");

    do {

        printf("Cima, Direita \n");
        bispo++;

    } while (bispo <= 5);

    printf("\n\nRainha move: \n");

    for (int rainha = 1; rainha <= 8; rainha++) {
        printf("Esquerda\n");
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
