#include <stdio.h>

/*
 * Desafio: nivel aventureiro - Movimentando as pecas do xadrez.
 *
 * Este programa simula movimentos simples de tres pecas:
 * - Torre: cinco casas para a direita usando for.
 * - Bispo: cinco casas na diagonal para cima e direita usando while.
 * - Rainha: oito casas para a esquerda usando do-while.
 * - Cavalo: duas casas para baixo e uma para a esquerda usando loops aninhados.
 *
 * Os valores de casas sao definidos diretamente no codigo, conforme pedido
 * no enunciado. Nao ha entrada de dados do usuario neste desafio.
 */
int main(void) {
    /* Quantidade de casas que cada peca deve percorrer no tabuleiro. */
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasBaixoCavalo = 2;
    int casasEsquerdaCavalo = 1;

    /* Variaveis contadoras usadas para controlar as repeticoes. */
    int contador;
    int casaAtualBispo = 1;
    int casaAtualRainha = 1;
    int etapaCavalo;
    int casaAtualCavalo;

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

    /*
     * Movimento do Cavalo:
     * o Cavalo se move em "L". Neste desafio, o movimento e composto por
     * duas casas para baixo e uma casa para a esquerda.
     *
     * O for externo separa as etapas principais do movimento:
     * - etapa 1: movimento vertical para baixo;
     * - etapa 2: movimento horizontal para a esquerda.
     *
     * O while interno imprime a quantidade de casas de cada etapa, formando
     * a sequencia esperada: Baixo, Baixo, Esquerda.
     */
    printf("\nMovimento do Cavalo:\n");
    for (etapaCavalo = 1; etapaCavalo <= 2; etapaCavalo++) {
        casaAtualCavalo = 1;

        if (etapaCavalo == 1) {
            while (casaAtualCavalo <= casasBaixoCavalo) {
                printf("Baixo\n");
                casaAtualCavalo++;
            }
        } else {
            while (casaAtualCavalo <= casasEsquerdaCavalo) {
                printf("Esquerda\n");
                casaAtualCavalo++;
            }
        }
    }

    return 0;
}
