#include <stdio.h>


#define LINHAS 10
#define COLUNAS 10


int main () {

    int a, b, i, j, k, l, m, x, y;
    //Array e Matriz para exibir o tabuleiro do jogo
    char coluna[LINHAS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[LINHAS][COLUNAS];

    for (a = 0; a < LINHAS; a++){
        for (b = 0; b < COLUNAS; b++) {
            tabuleiro[a][b] = 0;
        }
    }

    //Posionamento dos barcos
    //Navio Horizontal posicionado na LINHA 5, nas colunas C, D e E.
    l = 2;
    x = l + 2;
    if ((tabuleiro[4][l] == 0) && (tabuleiro[4][l + 1] == 0) && (tabuleiro[4][x] == 0) && (x < COLUNAS)) { // Checa se aquela parte é água e se não ultrapassou os limites tabuleiro
        while (l <= x) {
            tabuleiro[4][l] = 3; //<-- Posicionamento do navio
            l++;
        }
    } else {                                       // Imprime uma mensagem de erro caso a área especifica por navio for inválida
        printf("Houve um erro na hora de posicionar o Navio Horizontal. \n");
    }

    //Navio Vertical posicionado na COLUNA H, nas linhas 3, 4, e 5.
    m = 2;
    y = m + 2;
    if ((tabuleiro[m][7] == 0) && (tabuleiro[m + 1][7] == 0) && (tabuleiro[y][7] == 0) && (y < LINHAS)) { // Checa se aquela parte é água e se não ultrapassou os limites do tabuleiro
        while (m <= y) {
            tabuleiro[m][7] = 3; //<-- Posicionamento do navio
            m++;
        }
    } else {                                       // Imprime uma mensagem de erro caso a área especifica por navio for inválida
        printf("Houve um erro na hora de posicionar o Navio Vertical. \n"); 
    }

    /*Ideia 1. Ir ver os videos pra ver se eu pego ideia de como inserir os navios
    Ideia 2. Como plano B, eu tento inserir o navio de uma maneira mais bruta no código (Do modo em que eu conseguir pensar.)*/


    //Impressão da linha que mostra a marcação das colunas do Tabuleiro
    printf ("  ");
    for (i = 0; i < COLUNAS; i++){
        printf("%c ", coluna[i]);
    };

    printf("\n");
    //Impressão do restante do tabuleiro
    for (j = 0; j < LINHAS; j++){
        printf("%d ", j + 1); // <- Impressão da coluna que mostra as marcação das linhas
        for (k = 0; k < COLUNAS; k++) {
            printf("%d ", tabuleiro[j][k]);
        }
        printf("\n");
    }
    return 0;
}