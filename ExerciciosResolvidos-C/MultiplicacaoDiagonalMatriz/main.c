#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[4][4], i, j,constante, k;

    do
    {
        scanf("%d", &k);
        if(k == 0)
        {
            exit(0);
        }
        for(i=0; i<4; i++)
        {
            for(j=0; j<4; j++)
            {
                scanf("%d", &matrix[j][i]);
            }
        }

        for(i=0; i<4; i++)
        {
            for(j=0; j<4; j++)
            {
                if(j==i)
                {
                    constante = k * matrix[i][j];

                    printf("%d ",  constante);

                }
                else
                {
                    printf("%d ", matrix[i][j]);
                }

            }
            printf("\n");
        }
            }
    while(k !=0);
}
/*
Descrição:
Na matemática é comum o uso de matrizes de números. Estas matrizes podem ser utilizadas para vários fins e a álgebra linear
fornece a teoria necessária à sua manipulação.

Dada uma matriz 4 X 4, você deve fazer um programa para ler uma constante k, ler a matriz e escrevê-la após ter multiplicado
os elementos da diagonal principal pela constante k.

Formato de entrada
- Um inteiro k
- 16 inteiros, correspondendo aos elementos da matriz.

Primeiro serão fornecidos os elementos da primeira coluna, depois da segunda e assim por diante até a quarta.

A entrada termina quando k for igual a 0

Formato de saída
Você deverá imprimir a matriz resultante no formato de matriz, onde os elementos da primeira linha aparecerão lado a lado,
separados por um espaço (deve haver inclusive um espaço depois do último elemento de cada linha).

Cada linha da matriz será separada por um final de linha, inclusive depois da última.

Exemplos de:
Entrada
3
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
0

Saída
3 5 9 13
2 18 10 14
3 7 33 15
4 8 12 48
*/
