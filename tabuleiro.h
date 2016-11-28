/*Nome:  Victor Chiaradia Gramuglia Araujo
 *nºUsp: 9793756
 */
#ifndef __TABULEIRO_H__
#define __TABULEIRO_H__
#include"buffer.h"
typedef struct  {
                char tipo;
                int visto;
                } celula;
typedef celula** tabuleiro;

/*Função cria um tabuleiro 14x14 com todas as posiçoes como '-' e devolve um
 *ponteiro para esse tabuleiro.
 */
tabuleiro criaTab();
/*Função recebe um tabuleiro e desaloca sua memoria.
 */
void destroiTab(tabuleiro Tab);
/*Função recebe um tabuleiro que sera impresso de acordo com a representação
 *usual dos tabuleiros de Hex.
 */
void imprimeTab(tabuleiro Tab);

#endif
