#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"tabuleiro.h"
#include"pilha.h"

tabuleiro criaTabuleiro()
{
    short int i,j;
    tabuleiro tab;
    tab = malloc(14*sizeof(info*));
    if(!tab){
        printf("erro de alocação, função criaTabuleiro\n");
        exit(1);
    }
    for(i = 0; i < 14; i++){
        tab[i] = malloc(14*sizeof(info));
        for(j = 0; j < 14; j++){
            tab[i][j].tipoPeca ='-';
            tab[i][j].visitada = 0;
            tab[i][j].peso = 0;
        }
        if(!tab[i]){
            printf("erro de alocação, função criaTabuleiro\n");
            exit(1);
        }
    }
    return tab;
}

void imprimeTabuleiro(tabuleiro tab)
{
    short int i,j,k;
    for(i = 0; i < 14; i++){
        for(k = 0; k < i; k++){
            printf(" ");
        }
        for(j = 0; j < 14; j++){
            printf("%c ", tab[i][j].tipoPeca);
        }
        printf("\n");
    }
    return;
}

void destroiTabuleiro(tabuleiro tab)
{
    short int i;
    for(i = 0; i < 14; i++){
        free(tab[i]);
    }
    free(tab);
    return;
}

int pretoGanhou(tabuleiro tab)
{
    int i,j;
    int start[14];
    pilha *stack;
    j = 0;
    for(i = 0; i < 14; i++)
        start[j] = -1;
        if(!strcmp((&(tab[i][0]).tipoPeca), "p")){
            start[j] = i;
        }
    if(start[0] == -1) return 0;
    stack = criaPilha();
    i = 0;
    while(start[i] != -1){
        empilha(stack, start[i], 0);
        /*while(coloca o prim vizinho, dps faz isso pro prim vizinho desse cara){

        }*/
    }
    return 1;
}
