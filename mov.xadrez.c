#include <stdio.h>

/*
 ============================================================================
    PROJETO: Simulação Avançada de Movimentos de Peças de Xadrez
    PEÇAS: Torre, Bispo, Rainha e Cavalo
    CONCEITOS USADOS:
        - Recursividade (Torre, Bispo, Rainha)
        - Estruturas de repetição: for, while, do-while
        - Loops aninhados e controle de fluxo (Cavalo)
 ============================================================================
*/


// ----------------------------
// Função recursiva: TORRE
// ----------------------------
// Move-se em linha reta — 5 casas para a direita.
// Usa um loop FOR dentro da função recursiva apenas para imprimir detalhes.
void moverTorre(int passoAtual, int totalCasas) {
    if (passoAtual > totalCasas) return; // condição de parada

    // Exemplo de uso do FOR: imprime a direção uma vez por iteração
    for (int i = 0; i < 1; i++) {
        printf("Torre: Direita (%d casa)\n", passoAtual);
    }

    moverTorre(passoAtual + 1, totalCasas); // chamada recursiva
}


// ----------------------------
// Função recursiva: BISPO
// ----------------------------
// Move-se na diagonal — 5 casas para cima e à direita.
// Usa WHILE aninhado para simular movimento diagonal.
void moverBispo(int passoAtual, int totalCasas) {
    if (passoAtual > totalCasas) return; // condição de parada

    printf("Bispo: Movimento %d\n", passoAtual);

    int vertical = 1;
    while (vertical <= 1) { // movimento vertical (cima)
        int horizontal = 1;
        while (horizontal <= 1) { // movimento horizontal (direita)
            printf("   Cima, Direita\n");
            horizontal++;
        }
        vertical++;
    }

    moverBispo(passoAtual + 1, totalCasas); // chamada recursiva
}


// ----------------------------
// Função recursiva: RAINHA
// ----------------------------
// Move-se livremente — 8 casas para a esquerda.
// Usa DO-WHILE para imprimir a direção (garante execução pelo menos uma vez).
void moverRainha(int passoAtual, int totalCasas) {
    if (passoAtual > totalCasas) return; // condição de parada

    int contador = 0;
    do {
        printf("Rainha: Esquerda (%d casa)\n", passoAtual);
        contador++;
    } while (contador < 1); // executa apenas uma vez por chamada

    moverRainha(passoAtual + 1, totalCasas); // chamada recursiva
}


// ----------------------------
// Função: CAVALO
// ----------------------------
// Movimento em "L": duas casas para cima e uma para a direita.
// Usa loops aninhados e controle de fluxo com break/continue.
void moverCavalo(int movimentos) {
    printf("=== Movimento do Cavalo ===\n");

    for (int i = 1; i <= movimentos; i++) {          // movimento vertical
        for (int j = 1; j <= movimentos; j++) {      // movimento horizontal

            if (i == j) {
                continue; // ignora movimentos diagonais simples
            }

            printf("Cavalo: 2 Cima, 1 Direita (movimento %d)\n", i);

            break; // sai do loop interno após um movimento em "L"
        }
    }
}


// ----------------------------
// Função principal
// ----------------------------
int main() {
    // Quantidade de casas que cada peça deve se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 3;

    // ---------------- TORRE ----------------
    printf("=== Movimento da Torre ===\n");
    moverTorre(1, casasTorre);

    // ---------------- BISPO ----------------
    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(1, casasBispo);

    // ---------------- RAINHA ----------------
    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(1, casasRainha);

    // ---------------- CAVALO ----------------
    printf("\n");
    moverCavalo(movimentosCavalo);

    printf("\nSimulação concluída!\n");
    return 0;
}
