#include <stdio.h>

/*implementazione struttura dati albero binario*/

typedef int TIPO;

struct nodo
{
    TIPO valore;
    struct nodo * sx; /*puntatore figlio sinistro*/
    struct nodo * dx; /*puntatore dfiglio destro*/
};

typedef struct nodo NODO;

/*funzione che costruisce un albero binario dato un vettore 
(consideriamo l'indice i come radice, l'indice0 non viene utilizzato)*/

NODO * CreaAlbero(TIPO vett[], int i, int dim)
{
    NODO * pt;
    if(i >= dim) return NULL;
    else 
    {
        pt = malloc(sizeof(NODO));
        pt -> valore = vett[i];
        pt -> sx = CreaAlbero(vett, 2*i, dim);
        pt -> dx = CreaAlbero(vett, 2*i+1, dim);
        return pt;
    }
};

/*OPERAZIONI DI VISITA DEI NODI*/

/*preorder ricorsivo*/

void PreOrder(NODO * pt)
{
    visita(pt);
    if(pt -> sx != NULL) PreOrder(pt -> sx);
    if(pt -> dx != NULL) PreOrder(pt -> dx);
}

/*preorder iterativo (usando una pila)*/

void PreOrderIt(NODO * pt)
{
    Push(s, pt);
    while(!IsEmpty(s))
    {
        pt = Top(s); Pop(s);
        visita(pt);
        if(pt -> dx != NULL) Push(s, pt -> dx);
        if(pt -> sx != NULL) Push(s, pt -> sx);
    }
}

/*inorder ricorsivo*/

void InOrder(NODO * pt)
{
    if(pt -> sx != NULL) InOrder(pt -> sx);
    visita(pt);
    if(pt -> dx != NULL) InOrder(pt -> dx);
}

/*postorder ricorsivo*/

void PostOrder(NODO * pt)
{
    if(pt -> sx != NULL) PostOrder(pt -> sx);
    if(pt -> dx != NULL) PostOrder(pt -> dx);
    visita(pt);
}

/*levelorder iterativo (usando una coda -> salvando in essa i puntatori)*/

void LevelOrder(NODO * pt)
{
    Put(c, pt);
    while(!IsQueueEmpty(c))
    {
        pt = Get(c);
        visita(pt);
        if(pt -> sx != NULL) Put(c, pt -> sx);
        if(pt -> dx != NULL) Put(c, pt -> dx);
    }
}