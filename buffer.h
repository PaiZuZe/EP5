/*Nome:  Victor Chiaradia Gramuglia Araujo
 *nºUsp: 9793756
 */
#ifndef __BUFFER_H__
#define __BUFFER_H__
typedef struct  {
                int lin;
                int col;
                } cord;
typedef struct  {
                cord *Vet;
                int max;
                int top;
                }Buffer;
/*Função alloca memoria para um Buffer de tamanho determinado e devolve um
 *ponteiro para esse buffer.
 */
Buffer *criaBuffer();
/*Função recebe um buffer e as coordenadas que serão inseridas nele, se não houver
 *espaço o buffer é reallocado.
 */
void adicionaNoBuffer(Buffer *B, cord temp);
/*função recebe um ponteiro para um buffer e dobra ele de tamanho.
 */
void realocaBuffer(Buffer *B);
/*Função recebe um ponteiro de buffer e desaloca sua memoria.
 */
void destroiBuffer(Buffer *B);

#endif
