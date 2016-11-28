/*Nome:  Victor Chiaradia Gramuglia Araujo
 *nºUsp: 9793756
 */
#include<stdlib.h>
#include"fila.h"
fila* criaFila()
{
    fila* Fil;
    Fil = malloc(sizeof(fila));
    Fil->tam = 128;
    Fil->ini = Fil->top = 0;
    Fil->Vet = malloc(Fil->tam * sizeof(cord));
    return Fil;
}

void realocaFila(fila* Fil)
{
    Fil->tam = Fil->tam*2;
    Fil->Vet = realloc(Fil->Vet, (Fil->tam)*sizeof(cord));
    return;
}

int filaVazia(fila Fil)
{
    if(Fil.ini == Fil.top) return 1;
    return 0;
}

void insereFila(fila* Fil, cord temp)
{
    if(((Fil->top + 1) % Fil->tam) == Fil->ini) realocaFila(Fil);
    Fil->Vet[Fil->top] = temp;
    Fil->top = (Fil->top + 1) % Fil->tam;
    return;
}

cord removeFila(fila *Fil)
{
    cord temp;
    if(!filaVazia(*Fil)) {
        temp = Fil->Vet[Fil->ini];
        Fil->ini = (Fil->ini + 1) % Fil->tam;
        return temp;
    }
    /*Como foi pedido para remover um item de um fila vazia a tupla (0,0) sera
     *devolvida.
     */
    temp.lin = 0;
    temp.col = 0;
    return temp;
}

void destroiFila(fila* Fil)
{
    free(Fil->Vet);
    free(Fil);
    return;
}
