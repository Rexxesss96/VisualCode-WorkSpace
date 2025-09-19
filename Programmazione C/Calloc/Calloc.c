#include <stdio.h>

/*preleva dallo  Heap una quantità di memoria sufficiente
a memorizzare un vettore di n oggetti ciascuno di "dim" byte.
Se la chiamata ha successo viene restituito un indirizzo
a partire dal quale è disponibile la memoria richiesta
(inizializzata con tutti i bit a 0), altrimenti viene restituito
il valore NULL*/

/*Prototipo:
void *calloc(size_t nmemb, size_t size);
*/

void f(void)
{
    int *tmp;   /*variabile locale presente nel record
                 di attivazione*/
    
    /*allocazione dinamica di un vettore di 10 interi*/
    tmp = (int*)calloc(10, sizeof(int));
    tmp[0] = 56;    /*sto scrivendo nello heap*/
    ...
}