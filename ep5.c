#include<stdio.h>
#include<string.h>
#include"tabuleiro.h"
#include"pilha.h"

int main(int argc, char *argv[])
{
    pilha *stack;
    if(strcmp(argv[1], "p") && strcmp(argv[1], "b")){
        printf("argumento tipo de peça errado\n");
        return(1);
    }
    if(!strcmp(argv[1], "b")){
        printf("joga branco\n");
    }
    else{
        printf("joga preto\n");
    }
    stack = criaPilha();
    destroiPilha(stack);
    return 0;
}
