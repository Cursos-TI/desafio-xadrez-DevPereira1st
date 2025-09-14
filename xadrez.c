#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Torre, Bispo Rainha > Recursivo.

//Loops complexos > Cavalo
//Bispo Loop aninhados.
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita \n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas){
    if (casas > 0 ) {
        printf("Cima, Direita \n");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas){
    if (casas > 0) {
        printf("Esquerda \n");
        moverRainha(casas - 1);
    }
}

int main() {
     
    printf("\nTorre move: \n\n");
    moverTorre(5);
    
    printf("\nBispo move: \n\n");
    moverBispo(5);

    printf("\nRainha move: \n\n");
    moverRainha(8);

    // for (int cavalo = 2, cavalo1 = 0; cavalo < cavalo1;  cavalo++, cavalo1--) {
    //     // printf("cavalo = %d, \n cavalo1 = %d ", cavalo, cavalo1);
    //     if (cavalo == 2 ) break;;
    //     printf("Direita \n", cavalo);

    //     if (cavalo1 == 0 ) continue; 
    //     printf("Cima \n", cavalo1);
    // }

    /*int torre = 1; //variavel torre

    printf("Torre move: \n"); //Indetificação peça

    while (torre <= 5) { //Torre move 4 vezes para direita

            printf("Direita\n"); //Saída movimento no console
        
        torre++; //+1 incremento 
    }*/


    /*int bispo = 1; //variavel bispo

    printf("\n\nBispo move: \n"); //Indetificação peça

    do {

        printf("Cima, Direita \n"); //Saída movimento no console
        bispo++; //+1 incremento

    } while (bispo <= 5); //Bispo move 4 vezes para direita*/

    /*printf("\n\nRainha move: \n"); //Indetificação peça

    for (int rainha = 1; rainha <= 8; rainha++) { //Declaração variavel, Rainha move 7 vezes para direita, +1 incremento
        printf("Esquerda\n"); //Saída movimento no console
    }*/

     int cavalo = 0;   

    printf("\n\nCavalo move: \n"); //Indetificação peça

    do {
        for (int cavalo1 = 0; cavalo1 < 2; cavalo1++) {
            printf("Baixo \n"); //Saída movimento for no console
        }

        printf("Esquerda \n"); //Saída movimento dowhile no console

    } while (cavalo++); //incremento 


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
