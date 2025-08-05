#include <stdio.h>


#define LINHAS 10
#define COLUNAS 10


int main () {
    //Array e Matriz para exibir o tabuleiro do jogo
    char coluna[LINHAS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[LINHAS][COLUNAS] = {
    };

    //Posionamento dos barcos
    //Navio Horizontal posicionado na LINHA 5, nas colunas C, D e E.
    int navioHorizontal[3] = {3, 3, 3};
    


    //Impressão da linha que mostra a marcação das colunas do Tabuleiro
    printf ("  ");
    for (int i = 0; i < COLUNAS; i++){
        printf("%c ", coluna[i]);
    };

    printf("\n");
    //Impressão do restante do tabuleiro
    for (int j = 0; j < LINHAS; j++){
        printf("%d ", j + 1); // <- Impressão da coluna que mostra as marcação das linhas
        for (int k = 0; k < COLUNAS; k++) {
            printf("%d ", tabuleiro[j][k]);
        }
        printf("\n");
    }

    return 0;
}