#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    int tabuleiro[LINHAS][COLUNAS] = {0};

    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3}; 
    int navio3[3] = {3, 3, 3}; 
    int navio4[3] = {3, 3, 3}; 

    // posição inicial do primeiro navio
    int colunaNavio1 = 2;
    int linhaNavio1 = 3;

    // posição inicial do segundo navio
    int colunaNavio2 = 7;
    int linhaNavio2 = 4;

    int colunaNavio3 = 1;
    int linhaNavio3 = 3;

    int colunaNavio4 = 6;
    int linhaNavio4 = 3;

    for (int i = 0; i < 3; i++) {
        tabuleiro[colunaNavio1][linhaNavio1 + i] = navio1[i];
    }

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaNavio2 + i][colunaNavio2] = navio2[i];
    }

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaNavio3 + i][colunaNavio3 + i] = navio3[i];
    }

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaNavio4 + i][colunaNavio4 - i] = navio4[i];
    }

    // Exibir o tabuleiro
    printf("\n *** BATALHA NAVAL - TABULEIRO ***\n");
    printf("   ");

    for (int i = 0; i < 10; i++) {
        printf("%c ", letras[i]); // Índice das colunas
    }

    printf("\n");

    for (int i = 0; i < LINHAS; i++) {
        printf("%d  ", i); // Índice das linhas

        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}