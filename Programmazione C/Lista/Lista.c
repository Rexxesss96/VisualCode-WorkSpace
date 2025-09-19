#include <stdio.h>

/*definizione del tipo nodo*/

typedef int TIPO;

struct nodo
{
    TIPO dato;
    struct nodo * next;
};

typedef struct nodo NODO;

/*creazione di una lista inizialmente vuota*/

NODO *InitLista(void)
{
    NODO *tmp;
    tmp = (NODO *)malloc(sizeof(NODO));
    tmp -> next = NULL;
    return tmp;
}

/*cancellare una lista a partire da un nodo*/

void CancellaLista(NODO * pt)
{
    NODO *pt1;
    while(pt != NULL)
    {
        pt1 = pt;
        pt = pt -> next;    /*avanzo di un elemento*/
        free(pt1);  /*cancellando il precedente*/
    }
}

/*inserire in una lista un elemento in una posizione specificata*/

int Inserisci(NODO * pt, int pos, TIPO el)
{
    int i;
    NODO *pt1;
    i = 0;
    if(pos <= 0) return -1; /*posizione errata*/
    while((i < pos-1) && (pt != NULL))
    {
        i++;
        pt = pt -> next;
    }
    if(pt == NULL) return -1;   /*lista troppo corta*/

    /*pt ora punta al nodo in posizione pos-1*/

    pt1 = (NODO *)malloc(sizeof(NODO));
    pt1 -> next = pt -> next;
    pt1 -> dato = el;
    pt -> next = pt1;
    return 1;
}

/*cancellare in una lista un elemento specificato*/

int Elimina(NODO * pt, TIPO el)
{
    int i;
    NODO *pt1;
    if(pt == NULL) return -1;
    pt1 = pt -> next;
    if(pt -> next == NULL) return -1;
    while ((pt1 != NULL) && (pt1 -> dato != el))
    {
        pt = pt1;
        pt1 = pt1 -> next;
    }
    if(pt1 == NULL) return -1;  /*fine lista*/

    /*pt ora punta al nodo che precede*/
    /*quello da eliminare (puntatto da pt1)*/

    pt -> next = pt1 -> next;
    free(pt1);
    return 1;
}

/*verificare il numero di elementi presenti nella lista*/

int Lunghezza(NODO * pt)
{
    int i;
    if(pt == NULL) return -1;
    pt = pt -> next;
    i = 0;
    while (pt != NULL)
    {
        pt = pt -> next;
        i++;
    }
    return i;
}