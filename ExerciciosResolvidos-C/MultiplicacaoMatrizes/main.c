#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, j, n,m, o, x;

    scanf("%d %d %d", &n, &m, &o);


    int matrizA[n][m],matrizB[m][o],matrizC[n][o],Aux=0;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &matrizA[i][j]);
        }

    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<o; j++)
        {
            scanf("%d", &matrizB[i][j]);
        }

    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<o; j++)
        {
            matrizC[i][j]=0;
            for(x=0; x<m; x++)
            {
                Aux+= matrizA[i][x] * matrizB[x][j];

            }
            matrizC[i][j]=Aux;
            Aux=0;
        }
    }


    for(i=0; i<n; i++)
    {
        for(j=0; j<o; j++)
        {
            if(j == o-1)
            {
                printf("%d", matrizC[i][j]);
            }
            else
            {
                printf("%d ", matrizC[i][j]);
            }

        }
        printf("\n");
    }

    return 0;
}
/*
Formato de entrada

A primeira linha terá 3 inteiros N, M, O :

- N representa a quantidade de linhas da matriz A.

- M representa a quantidade de colunas da matriz A e a quantidade de linhas da matriz B.

- O indica a quantidade de colunas da matriz B.

Sendo seguido de N linhas com M números inteiros representando a matriz A, logo em seguida mias M linhas com O
números indicando a matriz B.

As matrizes A e B são compatíveis na multiplicação.

Formato de saída
Imprimir a matriz C.

Exemplos de:
Entrada
2 3 2
1 2 3
4 5 6
7 8
9 10
11 12

Saída
58 64
139 154
*/
