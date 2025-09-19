#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j, n;
    int **mat;

    /*leggi l'ordine della matrice*/
    scanf("d", &n);

    /*alloca un vettore di puntatori*/
    mat = calloc(n, sizeof(int*));

    /*alloca la riga i-esima*/
    for(i = 0; i < n; i++)
    {
        mat[i] = calloc(n, sizeof(int));
    }

    /*riempi la matrice con valori casuali*/
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            mat[i][j] = rand();
        }
    }

    /*stampa la traccia*/
    printf("Traccia: %f\n", traccia(mat, n));

    /*libera la memoria allocata*/
    for(i = 0; i < n; i++)
    {
        free(mat[i]);
    }
    free(mat);

    return 0;

}

/*definiamo una funzione traccia che somma gli elementi sulla diagonale*/

int traccia(int **mat, int ordine)
{
    int tr = 0;
    for(int i = 0; i < ordine; i++)
    {
        tr += mat[i][i];
    }
    return tr;
}
