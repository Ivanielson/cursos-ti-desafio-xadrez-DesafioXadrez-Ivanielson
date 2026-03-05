#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void bishop(int movementCounter) {
    if (movementCounter > 0) {
        printf("Cima, Direita\n");
        bishop(movementCounter - 1);
    }
}

void tower(int movementCounter) {
    if (movementCounter > 0) {
        printf("Direita\n");
        tower(movementCounter - 1);
    }
}

void queen(int movementCounter) {
    if (movementCounter > 0) {
        printf("Esquerda\n");
        queen(movementCounter - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("****** Bisbo se movimentando ******\n");
    for (int count = 1; count <= 5; count++) {
        printf("Cima, Direita\n");
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\n****** Torre se movimentando ******\n");
    int counter = 1;
    while (counter <= 5) {
        printf("Direita\n");
        counter++;
    }
    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\n****** Rainha se movimentando ******\n");
    int movementCounter = 1;
    do
    {
        printf("Esquerda\n");
        movementCounter++;
    } while (movementCounter <= 8);
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n****** Cavalo se movimentando ******\n");
    for (int i = 0; i < 1; i++) {
        for (int j = 1; j <= 2; j++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("\n****** Bisbo se movimentando ******\n");
    bishop(5);

    printf("\n****** Torre se movimentando ******\n");
    tower(5);

    printf("\n****** Rainha se movimentando ******\n");
    queen(8);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
