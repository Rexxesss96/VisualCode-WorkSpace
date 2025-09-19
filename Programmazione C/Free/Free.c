#include <stdio.h>

/*malloc() e calloc(), una volta terminate le funzioni, non
restituiscono al sistema lo spazione utilizzato per 
l'allocazione dinamica.*/

/*la restituzione deve essere esplicita attraverso l'uso
della funzione free().
Il valore specificato come parametro attuale deve corrispondere
ad un indirizzo in precedenza restituito da una funzione
di allocazione di memoria.*/

/*Prototipo:
void free(void *ptr);
*/

void f(void)
{
    /*variabili locali presenti nel record di attivazione*/
    int *tmp;
    int i;

    /*allocazione dinamica di un vettore di 10 interi*/
    tmp = (int*)calloc(10, sizeof(int));
    tmp[0] = 56;    /*uso il vettore dinamico*/
    ...

    /*restituisco la memoria al sistema prima di terminare*/
    free(tmp);

    /*errore in esecuzione: i non è nello heap*/
    free(&i);
}