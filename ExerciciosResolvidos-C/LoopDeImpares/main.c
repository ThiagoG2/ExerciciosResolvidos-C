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
Descrição:
Faça um programa que imprima todos os números ímpares entre dois números dados.

Formato de entrada
Dois números inteiros, n e m, separados por um final de linha.

Formato de saída
Todos os números ímpares maiores ou iguais a n e menores ou iguais a m, separados por um final de linha.

Exemplos de:
Entrada
5
12

Saída
5
7
9
11
*/

