#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    
    // Declaração de variaveis
    int movimento_bispo = 5, movimento_torre = 5, movimento_rainha = 8;

    // Implementação de Movimentação do Bispo
    int contador = 1;
    printf("Movimento do bispo: \n\n");
    while( contador <= movimento_bispo) {
        printf("Cima, Direita\n");
        contador++;
    }

    // Implementação de Movimentação da Torre

    printf("\nMovimento da torre: \n\n");

    for ( int contador2 = 1; contador2 <= movimento_torre; contador2++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha
    printf("\nMovimento da rainha: \n\n");
    int contador3 = 1;
    do {
        printf("Esquerda\n");
        contador3++;
    } while (contador3 <= movimento_rainha);


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
