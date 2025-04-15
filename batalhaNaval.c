#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {
    printf("Tabuleiro Batalha Naval: \n");

    int tabuleiro[LINHAS][COLUNAS];

    // declaração valores do tabuleiro
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++)
        {
            tabuleiro[i][j] = 0;
        };  
    };

    // declaração navio (horizontal)
    for (int i = 3; i < 4; i++) {
        for (int j = 6; j <= 8; j++) {
            tabuleiro[i][j] = 3;
        }
    }

    // declaração navio (vertical)
    for (int j = 7; j < 8; j++) {
        for (int i = 5; i <=7; i++) {
            tabuleiro[i][j] = 3;
        }
    }

    // declaração do primeiro navio na diagonal
    for (int i = 1; i < 4; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == j) {
                tabuleiro[i][j] = 3;
            }
        }
    }

    // declaração do segundo navio na diagonal
    for (int i = 6; i < 9; i++) {
        for (int j = 0; j < 10; j++) {
            if (i + j == 9) {
                tabuleiro[i][j] = 3;
            }
        }
    }

    // exibição do tabuleiro
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;

}