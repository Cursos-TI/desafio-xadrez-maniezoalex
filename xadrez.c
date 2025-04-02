#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void bispo (movimentos){
    while (movimentos > 0){
        if (movimentos%2==0){
            printf("Cima\n");
           return bispo(movimentos-1);
        }
        printf("Direita\n");

       return bispo(movimentos-1);
    

    }
}
void rainha(int movimentos){
    while (movimentos>=1){
        printf("Esquerda\n");
        return rainha(movimentos-1);
    }
}
 

void torre(int movimentos){
    while (movimentos>=1){
        printf("Direita\n");
        return torre(movimentos-1);
    }
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    
    //introdução para o código não ficar jogador
    printf("*Vamos mover as peças*\n\n");

    // Recursivo Bispo recebe o valor 12 pois para andar as 6 casas em diagonal é preciso que ele ande 6 para cima e 6 para a direita
    printf("\n*BISPO*\n");
    bispo(12);

    //Recursivo da Rainha recebe o valor de movimentos normais da rainha
    printf("\n*RAINHA*\n");
    rainha(8);

    //recursivo da Torre recebe o número de valores normais da Torre.

    printf("\n*TORRE*\n");
    torre(5);

    //Agora vamos implementar o loop complexo do Cavalo

printf("\n*CAVALO*\n");
/*Implementando continue no loop complexo, apleção do incremento ser simples. A lógica é a seguinte: a cada dois números
um é múltiplo de 3 quando se começa a contar do 1. Logo teremos 2 movimentos em uma direção e outro movimento na outra, o
que serve ao cavalo muito bem.
*/
   for (int cavalo = 1, movimentos = 3; cavalo <=movimentos; cavalo ++){
    if(cavalo % 3 ==0){
        printf("Direita\n");
        continue;
    }
    printf("Cima\n");
    
   }
}



