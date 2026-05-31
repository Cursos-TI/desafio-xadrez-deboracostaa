#include <stdio.h>

/*
 * Desafio: nivel mestre - Criando movimentos complexos.
 *
 * Este programa simula movimentos especificos de quatro pecas de xadrez:
 * - Torre: cinco casas para a direita usando recursividade.
 * - Bispo: cinco casas na diagonal para cima e direita usando recursividade
 *   combinada com loops aninhados.
 * - Rainha: oito casas para a esquerda usando recursividade.
 * - Cavalo: duas casas para cima e uma casa para a direita usando loops
 *   aninhados com controle de fluxo por continue e break.
 *
 * Todos os valores de movimento sao definidos diretamente no codigo, conforme
 * solicitado no enunciado. O programa nao recebe dados do usuario.
 */

/*
 * Funcao recursiva para o movimento da Torre.
 *
 * Parametro casasRestantes:
 * controla quantas casas ainda precisam ser percorridas. A cada chamada, uma
 * casa e impressa e o valor diminui em 1. Quando chega a zero, a recursao para.
 */
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) {
        return;
    }

    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

/*
 * Funcao recursiva para o movimento do Bispo.
 *
 * O Bispo anda na diagonal. Para cada casa diagonal, o loop externo representa
 * o deslocamento vertical e o loop interno representa o deslocamento horizontal.
 * Como o movimento solicitado e para cima e direita, cada chamada recursiva
 * imprime uma etapa vertical ("Cima") e uma etapa horizontal ("Direita").
 */
void moverBispo(int casasRestantes) {
    int movimentoVertical;
    int movimentoHorizontal;

    if (casasRestantes <= 0) {
        return;
    }

    for (movimentoVertical = 1; movimentoVertical <= 1; movimentoVertical++) {
        printf("Cima\n");

        for (movimentoHorizontal = 1; movimentoHorizontal <= 1; movimentoHorizontal++) {
            printf("Direita\n");
        }
    }

    moverBispo(casasRestantes - 1);
}

/*
 * Funcao recursiva para o movimento da Rainha.
 *
 * A Rainha pode se mover em varias direcoes. Neste desafio, ela percorre oito
 * casas para a esquerda. A condicao de parada evita chamadas recursivas
 * desnecessarias e impede que a funcao continue indefinidamente.
 */
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

int main(void) {
    /* Quantidade de casas usadas pelas funcoes recursivas. */
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    /*
     * Quantidade de casas do Cavalo em formato de "L":
     * duas casas para cima e uma casa para a direita.
     */
    int casasCimaCavalo = 2;
    int casasDireitaCavalo = 1;

    /*
     * Variaveis dos loops complexos do Cavalo.
     * etapaCavalo define se o programa esta na parte vertical ou horizontal.
     * casaAtualCavalo controla cada casa percorrida dentro da etapa atual.
     * limiteEtapa guarda quantas casas devem ser impressas naquela etapa.
     */
    int etapaCavalo;
    int casaAtualCavalo;
    int limiteEtapa;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    /*
     * Movimento do Cavalo:
     * o for externo possui multiplas variaveis: etapaCavalo controla a etapa
     * do movimento e limiteEtapa define a quantidade de casas daquela etapa.
     *
     * O for interno percorre as casas da etapa atual. O continue deixa claro
     * que, enquanto a etapa vertical nao terminou, o fluxo deve voltar para a
     * proxima repeticao imprimindo "Cima". O break encerra a etapa horizontal
     * assim que a unica casa para a direita e impressa.
     */
    printf("\nMovimento do Cavalo:\n");
    for (etapaCavalo = 1, limiteEtapa = casasCimaCavalo;
         etapaCavalo <= 2;
         etapaCavalo++, limiteEtapa = casasDireitaCavalo) {
        for (casaAtualCavalo = 1; casaAtualCavalo <= limiteEtapa; casaAtualCavalo++) {
            if (etapaCavalo == 1) {
                printf("Cima\n");
                continue;
            }

            printf("Direita\n");
            break;
        }
    }

    return 0;
}
