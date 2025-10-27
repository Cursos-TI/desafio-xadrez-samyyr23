#include <stdio.h>

// Função recursiva para Torre
void moverTorreCima(int casas) {
    if (casas <= 0) return;
    printf("Torre: Cima\n");
    moverTorreCima(casas - 1);
}

void moverTorreBaixo(int casas) {
    if (casas <= 0) return;
    printf("Torre: Baixo\n");
    moverTorreBaixo(casas - 1);
}

void moverTorreDireita(int casas) {
    if (casas <= 0) return;
    printf("Torre: Direita\n");
    moverTorreDireita(casas - 1);
}

void moverTorreEsquerda(int casas) {
    if (casas <= 0) return;
    printf("Torre: Esquerda\n");
    moverTorreEsquerda(casas - 1);
}

// Função recursiva para Bispo (com loops aninhados)
void moverBispo(int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {          // Loop externo (vertical)
        for (int j = 0; j < colunas; j++) {    // Loop interno (horizontal)
            printf("Bispo: Diagonal Cima-Direita\n");
        }
    }
}

// Função recursiva para Rainha
void moverRainhaCima(int casas) {
    if (casas <= 0) return;
    printf("Rainha: Cima\n");
    moverRainhaCima(casas - 1);
}

void moverRainhaBaixo(int casas) {
    if (casas <= 0) return;
    printf("Rainha: Baixo\n");
    moverRainhaBaixo(casas - 1);
}

void moverRainhaDireita(int casas) {
    if (casas <= 0) return;
    printf("Rainha: Direita\n");
    moverRainhaDireita(casas - 1);
}

void moverRainhaEsquerda(int casas) {
    if (casas <= 0) return;
    printf("Rainha: Esquerda\n");
    moverRainhaEsquerda(casas - 1);
}

// Função para Cavalo com loops complexos (movimento em "L")
void moverCavalo() {
    int movimentos[2] = {2, 1}; // duas casas para cima, uma para direita
    for (int i = 0; i < movimentos[0]; i++) {
        for (int j = 0; j < movimentos[1]; j++) {
            if (i == 1 && j == 0) continue; // exemplo de controle com continue
            printf("Cavalo: Movimento em L\n");
        }
    }
}

int main() {
    int casas = 3;        // Número de casas a mover para recursão
    int linhas = 2, colunas = 2; // Para Bispo loops aninhados

    // Movimentação da Torre
    moverTorreCima(casas);
    moverTorreBaixo(casas);
    moverTorreDireita(casas);
    moverTorreEsquerda(casas);
    printf("\n");

    // Movimentação do Bispo
    moverBispo(linhas, colunas);
    printf("\n");

    // Movimentação da Rainha
    moverRainhaCima(casas);
    moverRainhaBaixo(casas);
    moverRainhaDireita(casas);
    moverRainhaEsquerda(casas);
    printf("\n");

    // Movimentação do Cavalo
    moverCavalo();

    return 0;
}