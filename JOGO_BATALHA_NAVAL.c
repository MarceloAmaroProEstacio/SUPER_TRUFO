#include <stdio.h>
#include <stdbool.h>

#define TAMANHO 10
#define TAMANHO_NAVIO 3

// Função para inicializar o tabuleiro com água (valor 0)
void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }
}

// Função para validar se é possível posicionar um navio na posição especificada
bool validarPosicao(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, int deltaLinha, int deltaColuna) {
    for (int k = 0; k < TAMANHO_NAVIO; k++) {
        int novaLinha = linha + k * deltaLinha;
        int novaColuna = coluna + k * deltaColuna;

        if (novaLinha < 0 || novaLinha >= TAMANHO || novaColuna < 0 || novaColuna >= TAMANHO || tabuleiro[novaLinha][novaColuna] != 0) {
            return false;
        }
    }
    return true;
}

// Função para posicionar um navio no tabuleiro
void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, int deltaLinha, int deltaColuna) {
    for (int k = 0; k < TAMANHO_NAVIO; k++) {
        tabuleiro[linha + k * deltaLinha][coluna + k * deltaColuna] = 3;
    }
}

// Função para exibir o tabuleiro com números para as linhas e letras para as colunas
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    printf("   "); // Espaço para alinhar as letras das colunas
    for (int j = 0; j < TAMANHO; j++) {
        printf(" %c ", 'A' + j); // Letras para as colunas
    }
    printf("\n");

    for (int i = 0; i < TAMANHO; i++) {
        printf("%2d ", i + 1); // Números para as linhas
        for (int j = 0; j < TAMANHO; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO];
    
    // Inicializando o tabuleiro
    inicializarTabuleiro(tabuleiro);
    
    // Posicionando navios horizontais/verticais
     if (validarPosicao(tabuleiro, 0, 0, 0, 1)) {
        posicionarNavio(tabuleiro, 0, 0, 0, 1);
    }
     if (validarPosicao(tabuleiro, 3, 3, 1, 0)) {
        posicionarNavio(tabuleiro, 3, 3, 1, 0);
    }

    // Posicionando navios diagonais
     if (validarPosicao(tabuleiro, 5, 5, 1, 1)) {
        posicionarNavio(tabuleiro, 5, 5, 1, 1);
    }
     if (validarPosicao(tabuleiro, 7, 2, -1, 1)) {
        posicionarNavio(tabuleiro, 7, 2, -1, 1);
    }

     // Informações Gerais
     printf("JOGO BATALHA NAVAL \n");
     printf("NIVEL AVENTUREIRO.\n");
     printf("---------------------------------------------------------\n");     
     printf("ALUNO         : MARCELO AMARO RODRIGUES\n");     
     printf("PROFESSOR(ES) : NATHAN DE FREITAS ALVES E\n                SERGIO CARDOSO.\n");
     printf("INSTITUIÇÃO   : ESTACIO DE SÁ\n\n");

     
    // Exibindo o tabuleiro final
    printf("-------TABULEIRO BATALHA NAVAL:--------\n\n");
    exibirTabuleiro(tabuleiro);


    

    return 0;
}

