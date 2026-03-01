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
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    
    printf ("\nMovimento da torre:\n");
    moverTorre(5);

    printf ("\nMovimento da rainha:\n");
    moverRainha(8);

    printf ("\nMovimento do bispo:\n");
    moverBispo(5);

    /* Nível Aventureiro - Movimentação do Cavalo, utilizando loops aninhados, controle de fluxo e múltiplas variáveis */
    
    printf("\nMovimento do cavalo: \n");
    for (int i = 1, pular = 0;i <= 3; i++){ 
        if (pular == 1) {
            continue;
        }

        for (int j = 1; j<=2; j++ ){
            if (i < 3) {
                printf ("Cima\n");
                break;
            } else {
                printf ("Direita\n");
                pular = 1;
                break;
            }
        }
    }

    return 0;
}
