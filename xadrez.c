#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    
    // Declaração de variaveis
    int movimento_bispo = 5, movimento_torre = 5, movimento_rainha = 8;
    int movimento_cavalo_horizontal = 1, movimento_cavalo_vertical = 2;

    // Implementação de Movimentação do Bispo
    int i = 1;
    printf("Movimento do bispo: \n\n");
    while( i <= movimento_bispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // Implementação de Movimentação da Torre

    printf("\nMovimento da torre: \n\n");

    for ( int i = 1; i <= movimento_torre; i++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha
    printf("\nMovimento da rainha: \n\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= movimento_rainha);


    /* Nível Aventureiro - Movimentação do Cavalo, foi usado um loop for de iteração única para garantir que o programa execute até que
    o cavalo faça dois movimentos verticais e um horizontal */
    
    printf("\nMovimento do cavalo: \n\n");
    for (i = 1;i <= 1; i++){ 
        int j = 0;
        while (j < movimento_cavalo_vertical) {
            printf("Baixo\n");
            j++;
        }

        int k = 0;
        do {
            printf("Esquerda\n");
            k++;
        } while (k < movimento_cavalo_horizontal);
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
