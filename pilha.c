#include<stdio.h>
#include<stdlib.h>
#include"pilha.h"

pilha *criaPilha()
{
	pilha *p;
	p = malloc(sizeof(pilha));
    p->tamanho = 1;
    p->topo = 0;
	p->Cords = malloc(p->tamanho*sizeof(cordenadas));
	return p;
}
void realocaPilha(pilha *p)
{
    p->tamanho *= 2;
    p->Cords = (cordenadas *) realloc(p->Cords, p->tamanho*sizeof(cordenadas));
}
int pilhaVazia(pilha *p)
{
	if (p->topo == 0) return 1;
	return 0;
}

void empilha(pilha *p, int linha, int coluna)
{
    if (p->topo == p->tamanho) realocaPilha(p);
    p->Cords[p->topo].lin = linha;
    p->Cords[p->topo].col = coluna;
	p->topo++;
	return;
}

cordenadas *desempilha(pilha *p)
{
	cordenadas *temp;
	if (pilhaVazia(p)) return 0;
	*temp = p->Cords[p->topo -1];
	p->topo--;
	return temp;
}

void destroiPilha(pilha *p)
{
    free(p->Cords);
    free(p);
    return;
}
