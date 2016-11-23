#ifndef __TABULEIRO_H__
#define __TABULEIRO_H__
typedef struct  {
                char tipoPeca;
                short int visitada;
                int peso;
                } info;

typedef info **tabuleiro;

tabuleiro criaTabuleiro();

void imprimeTabuleiro(tabuleiro tab);

void destroiTabuleiro(tabuleiro tab);

#endif
