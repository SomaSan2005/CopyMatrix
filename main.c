#include <stdio.h>

#define Matrix1 2
#define Matrix2 2

int main()
{
    // creazione della Matrice1 in memoria
    int Matrice1[Matrix1][Matrix1];
    int Matrice2[Matrix2][Matrix2];

    // inilizazione della  Matrice1
    for (int i = 0; i < Matrix1; i++)
    {
        for (int k = 0; k < Matrix1; k++)
            Matrice1[i][k] = 0;
    }
 
    // inserimento della  Matrice1 da tastiera
    printf("\ninserimento valori dellla Matrice1");
    for (int i = 0; i < Matrix1; i++)
    {
        for (int k = 0; k < Matrix1; k++)
        {
            printf("\nInserisci valore di riga %d e colonna %d: ", i, k);
            scanf("%d", &Matrice1[i][k]);
        }
    }

    // trasferimento valori della matrice1 alla Matrice2
    for (int r = 0; r < Matrix2; r++)
    {
        for (int c = 0; c < Matrix2; c++)
            Matrice2[r][c] = Matrice1[r][c];
    }

    // stampa della dei valori della Matrice2
    printf("\nvalori della Matrice2 ");
    for (int r = 0; r < Matrix2; r++)
    {
        printf("\n");

        for (int c = 0; c < Matrix2; c++)
            printf("\t%d", Matrice2[r][c]);
    }
}
