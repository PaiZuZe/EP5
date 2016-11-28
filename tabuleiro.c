/*Nome:  Victor Chiaradia Gramuglia Araujo
 *nºUsp: 9793756
 */
#include<stdlib.h>
#include<stdio.h>
#include"tabuleiro.h"

tabuleiro criaTab()
{
    tabuleiro Tab;
    int i, j;
    Tab = malloc(14*sizeof(celula *));
    for(i = 0; i < 14; i++) Tab[i] = malloc(14*sizeof(celula));
    for(i = 0; i < 14; i++)
        for(j = 0; j < 14; j++) {
            Tab[i][j].tipo = '-';
            Tab[i][j].visto = 0;
        }
    return Tab;
}

void destroiTab(tabuleiro Tab)
{
    int i;
    for(i = 0; i < 14; i++) free(Tab[i]);
    free(Tab);
}

void imprimeTab(tabuleiro Tab)
{
    int i, j;
    for(i = 0; i < 14; i++) {
        for(j = 0; j < i; j++) fprintf(stderr, " ");
        for(j = 0; j < 14; j++)  fprintf(stderr, "%c ", Tab[i][j].tipo);
        fprintf(stderr, "\n");
    }
}
