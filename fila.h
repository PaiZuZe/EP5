/*Nome:  Victor Chiaradia Gramuglia Araujo
 *nºUsp: 9793756
 */
#ifndef __fila_H__
#define __fila_H__
#include"buffer.h"

typedef struct  {
                cord* Vet;
                int ini;
                int top;
                int tam;
                } fila;

/*Função alloca a memória para uma fila e devolve um ponteiro para essa memoria.
 */
fila* criaFila();
/*Essa função recebe um ponteiro para fila que se deseja aumentar o tamanho.
 */
void realocaFila(fila* Fil);
/*Função recebe uma fila e retorna 1 se estiver vazia ou zero caso contrario.
 */
int filaVazia(fila Fil);
/*Função recebe uma ponteiro para fila e um par de coordenadas que serão inseridos
 *nesta fila.
 */
void insereFila(fila* Fil, cord temp);
/*Função recebe um ponteiro para fila e devolve o primeiro elemento da fila.
 */
cord removeFila(fila* Fil);
/*Função recebe um ponteiro para fila e desaloca a memoria usada por ela.
 */
void destroiFila(fila* Fil);


#endif
