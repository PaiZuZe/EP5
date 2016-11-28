/*Nome:  Victor Chiaradia Gramuglia Araujo
 *nºUsp: 9793756
 */
#include<stdlib.h>
#include"buffer.h"

Buffer *criaBuffer()
{
    Buffer *B = malloc(sizeof(Buffer));
    B->max = 32;
    B->top = 0;
    B->Vet = malloc(B->max*sizeof(cord));
    return B;
}

void realocaBuffer(Buffer *B)
{
    B->max = 2*B->max;
    B->Vet = realloc(B->Vet, B->max*sizeof(cord));
    return;
}

void adicionaNoBuffer(Buffer *B, cord temp)
{
    if(B->top == B->max) realocaBuffer(B);
    B->Vet[B->top].lin = temp.lin;
    B->Vet[B->top].col = temp.col;
    B->top++;
    return;
}

void destroiBuffer(Buffer *B)
{
    if(B->Vet) free(B->Vet);
    if(B) free(B);
    return;
}
