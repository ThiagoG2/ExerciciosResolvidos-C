#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    scanf("%d", &x);

    int antecessor = x - 1;
    int sucessor = x + 1;

    printf("%d %d", antecessor, sucessor);

    return 0;
}
/*
Descrição:
Faça um programa que leia um número inteiro e imprima o seu antecessor (inteiro anterior) e o seu sucessor (inteiro posterior).

Formato de entrada
Um número inteiro.

Formato de saída
O inteiro anterior e o sucessor, separados por um espaço.

Exemplos de:
Entrada
4610

Saída
4609 4611
*/
