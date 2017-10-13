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
Descri��o:
Na matem�tica � comum o uso de matrizes de n�meros. Estas matrizes podem ser utilizadas para v�rios fins e a �lgebra linear
fornece a teoria necess�ria � sua manipula��o.

Dada uma matriz 4 X 4, voc� deve fazer um programa para ler uma constante k, ler a matriz e escrev�-la ap�s ter multiplicado
os elementos da diagonal principal pela constante k.

Formato de entrada
- Um inteiro k
- 16 inteiros, correspondendo aos elementos da matriz.

Primeiro ser�o fornecidos os elementos da primeira coluna, depois da segunda e assim por diante at� a quarta.

A entrada termina quando k for igual a 0

Formato de sa�da
Voc� dever� imprimir a matriz resultante no formato de matriz, onde os elementos da primeira linha aparecer�o lado a lado,
separados por um espa�o (deve haver inclusive um espa�o depois do �ltimo elemento de cada linha).

Cada linha da matriz ser� separada por um final de linha, inclusive depois da �ltima.

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

Sa�da
3 5 9 13
2 18 10 14
3 7 33 15
4 8 12 48
*/
