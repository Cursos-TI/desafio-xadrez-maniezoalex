#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int torre, bispo, rainha, cavaloHorizontal, cavaloVertical;
    //introdução para o código não ficar jogador
    printf("*Vamos mover as peças*\n\n");

    // Implementação de Movimentação do Bispo

    for (bispo = 1; bispo < 6; bispo++){
        printf("Cima\n");
        printf("Direita\n");
        }

        printf("\nAgora os movimentos da Torre\n");
        

    // Implementação de Movimentação da Torre
    for (torre = 1; torre < 6; torre++){
        printf("Direita\n");
       
    }

    printf("\nAgora os movimentos da rainha.\n");

    for (rainha = 1; rainha < 8; rainha++){
        printf("Esquerda\n");
    }

    printf("\nAgora vamos a movimentação do Cavalo\n");

    for (cavaloVertical=1; cavaloVertical <=1; cavaloVertical++){

        for(cavaloHorizontal=1; cavaloHorizontal<=2; cavaloHorizontal++){
            printf("Cima\n");
        }
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
