#include <stdio.h>

int main() {
    printf("Tabuleiro Batalha Naval: \n");

    int tabuleiro[10][10];

    // declaração valores do tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
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

    // exibição do tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;

}