#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 4

int main()
{
    float temp,num,a,b,c,d;
    int i,j;

    float array[MAXSIZE];
    num = MAXSIZE;

    for (i = 0; i < num; i++)
    {
        scanf("%f", &array[i]);
    }


    for (i = 0; i < num; i++)
    {
        for (j = 0; j < (num - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
        a = array[0];
        b = array[2];
        c = array[3];
        d = array[1];

       printf("%.2f\n%.2f\n%.2f\n%.2f\n", a,b,c,d);

        return 0;

}
/*
Descri��o:
Ambrosina � uma fot�grafa muito peculiar. Ela s� aceita tirar fotos de pessoas se as pessoas estiverem em grupos de exatamente
04 pessoas. Tudo isso porque Ambrosina tem uma mania esquisita de ordena��o. Para ela, a pessoa mais baixa deve ficar sempre
do lado esquerdo, a segunda mais baixa do lado direito, no meio, logo ap�s a mais baixa, fica a terceira mais baixa e em seguida
a mais alta.

Formato de entrada
A entrada consiste de 04 n�meros reais maiores que zero correspondendo �s alturas de 04 pessoas. Cada n�mero � dado em uma
linha diferente. A entrada pode n�o estar ordenada.

Formato de sa�da
Consiste de 04 n�meros reais, separados por um final de linha, ordenados de acordo com a mania de Ambrosina.
Os n�meros devem ser formatados com 02 casas decimais.

Exemplos de:
Entrada
40
30
20
10

Sa�da
10.00
30.00
40.00
20.00
*/
