/*
 * Simulação de movimento de peças de xadrez usando estruturas de repetição em C.
 * Desafio: Movimentando as Peças do Xadrez
 * Autor: [Seu Nome]
 * Data: [Atualize com a data de entrega]
 *
 * Este programa simula os movimentos da Torre, Bispo e Rainha em um tabuleiro de xadrez,
 * utilizando as estruturas de repetição for, while e do-while, respectivamente.
 *
 * Não há interação com o usuário; os números de casas a serem movidas são definidos por variáveis.
 */

#include <stdio.h>

int main() {
    // Número de casas para cada peça
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    int i; // variável auxiliar para repetição

    // --- Movimento da Torre ---
    // A Torre se move em linha reta. Aqui, simulamos 5 casas para a direita usando 'for'.
    printf("Movimento da Torre (5 casas para a direita):\n");
    for(i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --- Movimento do Bispo ---
    // O Bispo se move em diagonais. Usamos 'while' para 5 casas na diagonal "Cima, Direita".
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    i = 1;
    while(i <= casas_bispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // --- Movimento da Rainha ---
    // A Rainha pode se mover em todas as direções. Aqui, simulamos 8 casas para a esquerda usando 'do-while'.
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

/*
    Saída esperada do programa:

    Movimento da Torre (5 casas para a direita):
    Direita
    Direita
    Direita
    Direita
    Direita

    Movimento do Bispo (5 casas na diagonal Cima Direita):
    Cima Direita
    Cima Direita
    Cima Direita
    Cima Direita
    Cima Direita

    Movimento da Rainha (8 casas para a esquerda):
    Esquerda
    Esquerda
    Esquerda
    Esquerda
    Esquerda
    Esquerda
    Esquerda
    Esquerda
*/