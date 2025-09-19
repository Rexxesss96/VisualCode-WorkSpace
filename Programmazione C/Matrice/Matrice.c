#include <stdio.h>

/*allocazione dinamica di una matrice quadrata di ordine
n sulla quale viene effettuato il calcolo della tracci
(la diagonale)*/

int main(void)
{
    int i, j, n;
    int **mat;

    /*leggi l'ordine della matrice*/
    scanf("%d", &n);

    /*alloca un vettore di puntatori*/
    mat = calloc(n, sizeof(int *));

    for (i = 0; i < n; i++) /*alloca la riga i-esima*/
    {
        mat[i] = calloc(n, sizeof(int));
    }

    /*riempi la matrice con n valori casuali*/
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            mat[i][j] = rand();
        }
    }

    /*stampa la traccia*/
    printf("%d", traccia(mat, n));
}

/*la funzione traccia può essere definita come segue*/

int traccia(int **mat, int ordine)
{
    int tr, i;
    for (i = 0; i < ordine; i++)
    {
        tr = tr + mat[i][i];
    }
    return tr;
}