#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// Implementação de Movimentação da Torre

    void moverTorre(int casas) {
        if ( casas > 0) {
            printf("Direita\n");
            moverTorre(casas - 1);
        }
    }

// Implementação de Movimentação da Rainha
    
    void moverRainha(int casas) {
        if ( casas > 0) {
            printf("Esquerda\n");
            moverRainha(casas - 1);
        }
    }

// Implementação de Movimentação do Bispo
    void moverBispo(int casas) {
        if (casas > 0) {
            for (int j = 1; j <= 1; j++) {
                printf ("Cima, ");
            }
        printf ("Direita\n");
        moverBispo(casas - 1);
        }
    }

int main() {
    // Nível Novato - Movimentação das Peças
    
    // Declaração de variaveis
    int movimento_cavalo_horizontal = 1, movimento_cavalo_vertical = 2;


    /* Nível Aventureiro - Movimentação do Cavalo, foi usado um loop for de iteração única para garantir que o programa execute até que
    o cavalo faça dois movimentos verticais e um horizontal */
    
    printf("\nMovimento do cavalo: \n\n");
    for (int i = 1;i <= 1; i++){ 
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
    
    printf ("\nMovimento da torre:\n");
    moverTorre(5);

    printf ("\nMovimento da rainha:\n");
    moverRainha(8);

    printf ("\nMovimento do bispo:\n");
    moverBispo(5);

    return 0;
}
