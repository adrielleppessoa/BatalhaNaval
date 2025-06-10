#include <stdio.h>

int main() {
    
    // Tabuleiro iniciado:
    int tabuleiro[10][10] = {0};

    //Navios Definifos:
    int navioHorizontal[3] = {3,3,3};
    int navioVertical[3] = {3,3,3};

    //Navio Hrizontal Posicionado:
    int linhaHorizontal = 5;
    int colunaHorizontal = 2;

    //Estrutura de Repetição (Navio Horizontal):
    for (int batalha = 0; batalha <= 3; batalha++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + batalha] = navioHorizontal[batalha];
    }

    //Navio Vertical Posicionado:
    int linhaVertical = 6;
    int colunaVertical = 7;

    //Estrutura de Repetição (Navio Vertical):
    for (int naval = 0; naval <= 3; naval++) {
        tabuleiro[linhaVertical + naval][colunaVertical] = navioVertical[naval];
    }

    //Tabuleiro:

    printf("===== Tabuleiro Batalha Naval: =====\n\n");
    for (int batalha = 0; batalha < 10; batalha++) {
        for (int naval = 0; naval < 10; naval++) {
            printf("%d ", tabuleiro[batalha][naval]);
        }
        printf("\n");
    }

    return 0;


}
    
    

