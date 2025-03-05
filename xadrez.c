#include <stdio.h>

#define MOVIMENTOS_BISPO 5   // O número de casas que o bispo pode andar na diagonal superior direita
#define MOVIMENTOS_TORRE 5   // O número de casas que a torre pode andar para a direita
#define MOVIMENTOS_RAINHA 8  // O número de casas que a rainha pode andar para a esquerda

int main() {
    // Variáveis que armazenam a direção de movimentação
    int i;

    // Movimentação do Bispo (5 casas na diagonal superior direita)
    printf("Movimentação do Bispo:\n");
    for(i = 0; i < MOVIMENTOS_BISPO; i++) {
        printf("Cima\n");  // Direção para cima
        printf("Direita\n");  // Direção para a direita
    }

    // Movimentação da Torre (5 casas para a direita)
    printf("\nMovimentação da Torre:\n");
    for(i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");  // Direção para a direita
    }

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimentação da Rainha:\n");
    for(i = 0; i < MOVIMENTOS_RAINHA; i++) {
        printf("Esquerda\n");  // Direção para a esquerda
    }

    return 0;
}
