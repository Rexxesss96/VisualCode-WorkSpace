#include <stdio.h>

/*preleva dallo Heap una quantità di memoria (in byte)
pari al valore specificato come parametro.
Se la chiamata ha successo viene restituito un indirizzo
a partire dal quale è disponibile la memoria richiesta, altrimenti
viene restituito il valore NULL*/

/*Prototipo:
void * malloc(size_t size);
*/

void f(void)
{
    int *tmp;   /*variabile locale presente nel record
                di attivazione*/

    /*allocazione dinamica di un vettore di 10 interi*/
    tmp = (int*)malloc(10*sizeof(int));
    tmp[0] = 56;    /*sto scrivendo nello heap*/
    ...
}