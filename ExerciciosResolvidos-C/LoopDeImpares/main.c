#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numA, numB, i;
    scanf("%d %d", &numA, &numB);

    for(i = numA; i <= numB; i++){
        if(i % 2== 1)
            printf("%d\n", i);

    }
    return 0;
}
/*
Descri��o:
Fa�a um programa que imprima todos os n�meros �mpares entre dois n�meros dados.

Formato de entrada
Dois n�meros inteiros, n e m, separados por um final de linha.

Formato de sa�da
Todos os n�meros �mpares maiores ou iguais a n e menores ou iguais a m, separados por um final de linha.

Exemplos de:
Entrada
5
12

Sa�da
5
7
9
11
*/

