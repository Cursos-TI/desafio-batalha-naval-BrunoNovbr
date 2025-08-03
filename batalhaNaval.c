#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios
    //Array e Matriz para exibir o tabuleiro do jogo
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    //Posicionamento dos navios.
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.

    //Impressão da linha que mostra a marcação das colunas do Tabuleiro
    printf ("  ");
    for (int i = 0; i < 10; i++){
        printf("%c ", coluna[i]);
    };

    printf("\n");
    //Impressão do restante do tabuleiro
    for (int j = 0; j < 10; j++){
        printf("%d ", j + 1); // <- Impressão da coluna que mostra as marcação das linhas
        for (int k = 0; k < 10; k++) {
            printf("%d ", tabuleiro[j][k]);
        }
        printf("\n");
    }

    return 0;
}
