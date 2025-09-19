#include <stdio.h>

/*definizione del tipo pila*/

typedef int TIPO;

struct pila
{
    TIPO * stack;
    int DimMax;
    int top;    /*prima posizione libera*/
};

typedef struct pila PILA;

/*creazione di una pila inizialmente vuota*/

PILA *InitPila(int n)
{
    PILA *tmp;
    tmp = (PILA *) malloc(sizeof(PILA));
    if(tmp == NULL) return NULL;
    tmp -> stack = (TIPO *) calloc(n, sizeof(TIPO));
    if(tmp -> stack == NULL) return NULL;
    tmp -> DimMax = n;
    tmp -> top = 0;
    return tmp;
}

/*eliminare da una pila l'elemento in cima*/

void Pop(PILA * pt)
{
    if(!IsEmpty(pt)) (pt -> top)--;
}

/*inserire in una pila un nuovo elemento*/

void Push(PILA * pt, TIPO el)
{
    if(pt != NULL)
    if(pt -> top < pt -> DimMax)    /*c'è posto nella pila*/
    {
        pt -> stack[pt -> top] = el;
        (pt -> top)++;
    }
}

/*leggere elemento in cima ad una pila*/

TIPO Top(PILA * pt)
{
    if (!IsEmpty(pt)) return (pt -> stack[pt -> top-1]);
}

/*verificare se la pila è vuota (return 0, altrimenti 1)*/

int isEmpty(PILA * pt)
{
    if(pt != NULL) return (pt -> top == 0);
}