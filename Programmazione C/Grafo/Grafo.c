#include <stdio.h>

/*implementazione grafo -> uso di una matrice di adiacenza*/

/*nel caso di grafi sparsi si ottiene una rappresentazione più efficiente
ricorrendo a liste di adiacenza*/

/*rappresentiamo l'intero grafo atttraverso un vettore di puntatori
(uno per nodo) che permettono l'accesso alle liste di adiacenza*/

struct nodo
{
    int nome;
    struct nodo * next;
};

typedef struct nodo NODO;

/*vediamo la seguente funzione che costruisce la rappresentazione tramite
liste di adiacenza di un grafo specificato attraverso la sua matrice di adiacenza*/

NODO ** CreaGrafo(int ** MatAdiac, int dim)
{
    int i;
    NODO ** pt;
    NODO ** grafo;

    grafo = malloc(dim*sizeof(NODO*));
    for(i = 0; i < dim; i++)
    {
        pt = &grafo[i];
        for(int j=0; j<dim; j++)
        {
            if(MatAdiac[i][j] != 0)
            {
                *pt = malloc(sizeof(NODO));
                (*pt) -> nome = j;
                (*pt) -> next = NULL;
                pt = &((*pt) -> next);
            }
        }
    }
    return grafo;
}

/*OPERAZIONI DI VISITA DEI NODI*/

/*visita in ampiezza (utilizzando una coda)*/

void Ampiezza(NODO ** grafo, int nodo, int n_nodi)
{
    int * visitato;
    CODA *coda;
    NODO *pt;

    visitato = calloc(n_nodi, sizeof(int));
    coda = InitQueue();
    visitato[nodo] = 1;
    Put(nodo, coda);    /*inserisci nella coda*/
    while(!IsQueueEmpty(coda))
    {
        nodo = Get(coda);   /*estrai il primo nodo*/
        visita(nodo, grafo);    /*visitalo e scorri la sua lista di adiacenza*/
        for(pt = grafo[nodo]; pt != NULL; pt = pt -> next)
        {
            if(visitato[pt -> nome] == 0)
            {
                visitato[pt -> nome] = 1;
                Put(pt -> nome, coda);
            }
        }
    }
}

/*visita in profondità ricorsiva*/

void Profondita(NODO ** grafo, int nodo, int * visitato)
{
    NODO * pt;

    visita(nodo, grafo);
    visitato[nodo] = 1;
    for(pt = grafo[nodo]; pt != NULL; pt = pt -> next)
    {
        if(visitato[pt -> nome] == 0)
        {
            Profondita(grafo, pt -> nome, visitato);
        }
    }
}

/*visita in profondità iterativa (consideriamo la procedura visita in ampiezza
e utilizziamo un pila al posto di una coda per salvare puntatori a nodi dai
quali proseguire la visita)*/

void Profonit(NODO ** grafo, int nodo, int n_nodi)
{
    int * visitato;
    PILA *pila;
    NODO *pt;

    visitato = calloc(n_nodi, sizeof(int));
    pila = InitPila(n_nodi);
    visitato[nodo] = 1;
    visita(nodo, grafo);
    if(grafo[nodo] != NULL)
    {
        Push(pila, grafo[nodo]);
    }
    while(!IsStackEmpty(pila))
    {
        pt = Top(pila);
        Pop(pila);
        if(pt -> next != NULL) Push(pila, pt -> next);
        if(visitato[pt -> nome] == 0)
        {
            visita(pt -> nome, grafo);
            visitato[pt -> nome] = 1;
            /*scorri la sua lista di adiacenza*/
            pt = grafo[nodo -> nome];
            while(pt != NULL && visitato[pt -> nome] != 0)
            {
                pt = pt -> next;
                if(pt != NULL)
                {
                    Push(pila, pt);
                }
            }
        }
    }
}