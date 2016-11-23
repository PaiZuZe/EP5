#ifndef __PILHA_H__
#define __PILHA_H__
typedef struct  {
                short int lin;
                short int col;
                } cordenadas;
typedef struct { cordenadas *Cords;
		  	     int topo;
		         int tamanho;
		       } pilha;

pilha *criaPilha();

void realocaPilha(pilha *p);

int pilhaVazia(pilha *p);

void empilha(pilha *p, int linha, int coluna);

cordenadas *desempilha(pilha *p);

void destroiPilha(pilha *p);
#endif
