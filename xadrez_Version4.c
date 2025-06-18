#include <stdio.h>

int main() {
    // Definição do número de casas para cada peça
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    int i; // variável auxiliar para os laços

    // -------------------------------
    // Movimentação da TORRE (for)
    // -------------------------------
    // A torre se move em linha reta (horizontal ou vertical).
    // Aqui, simulamos 5 casas para a DIREITA usando o laço for.
    printf("Movimento da Torre (5 casas para a direita):\n");
    for(i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // -------------------------------
    // Movimentação do BISPO (while)
    // -------------------------------
    // O bispo se move nas diagonais.
    // Aqui, simulamos 5 casas na diagonal para CIMA e DIREITA usando while.
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    i = 1;
    while(i <= casas_bispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // -------------------------------
    // Movimentação da RAINHA (do-while)
    // -------------------------------
    // A rainha se move em todas as direções.
    // Aqui, simulamos 8 casas para a ESQUERDA usando do-while.
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while(i <= casas_rainha);
    printf("\n");

    // Fim do programa
    return 0;
}