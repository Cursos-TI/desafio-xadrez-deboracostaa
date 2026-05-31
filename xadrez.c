#include <stdio.h>

/*
 * Desafio: nivel novato - Movimentando as pecas do xadrez.
 *
 * Este programa simula movimentos simples de tres pecas:
 * - Torre: cinco casas para a direita usando for.
 * - Bispo: cinco casas na diagonal para cima e direita usando while.
 * - Rainha: oito casas para a esquerda usando do-while.
 *
 * Os valores de casas sao definidos diretamente no codigo, conforme pedido
 * no enunciado. Nao ha entrada de dados do usuario neste nivel.
 */
int main(void) {
    /* Quantidade de casas que cada peca deve percorrer no tabuleiro. */
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    /* Variaveis contadoras usadas para controlar as repeticoes. */
    int contador;
    int casaAtualBispo = 1;
    int casaAtualRainha = 1;

    /*
     * Movimento da Torre:
     * a Torre anda em linha reta. Neste desafio, ela percorre cinco casas
     * para a direita. O loop for e adequado quando sabemos antecipadamente
     * quantas repeticoes serao executadas.
     */
    printf("Movimento da Torre:\n");
    for (contador = 1; contador <= casasTorre; contador++) {
        printf("Direita\n");
    }

    /*
     * Movimento do Bispo:
     * o Bispo anda na diagonal. Para representar a diagonal para cima e
     * direita, imprimimos as duas direcoes a cada casa percorrida.
     * O while repete enquanto a casa atual nao ultrapassar o total definido.
     */
    printf("\nMovimento do Bispo:\n");
    while (casaAtualBispo <= casasBispo) {
        printf("Cima Direita\n");
        casaAtualBispo++;
    }

    /*
     * Movimento da Rainha:
     * a Rainha pode andar em varias direcoes. Aqui simulamos apenas o
     * movimento de oito casas para a esquerda. O do-while executa o bloco
     * pelo menos uma vez e depois verifica se ainda deve continuar.
     */
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        casaAtualRainha++;
    } while (casaAtualRainha <= casasRainha);

    return 0;
}
