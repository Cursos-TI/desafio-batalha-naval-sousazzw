#include <stdio.h>

#define TAMANHO 5

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};
    
    // Posicionando um navio verticalmente na coluna 2
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][2] = 1;
    }
    
    // Posicionando um navio horizontalmente na linha 4
    for (int j = 1; j < 4; j++) {
        tabuleiro[4][j] = 1;
    }
    
    // Exibindo as coordenadas dos navios
    printf("Coordenadas dos navios:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("Navio em: (%d, %d)\n", i, j);
            }
        }
    }
    
    return 0;
}

