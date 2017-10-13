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
Descri��o:
Fa�a um programa que leia um n�mero inteiro e imprima o seu antecessor (inteiro anterior) e o seu sucessor (inteiro posterior).

Formato de entrada
Um n�mero inteiro.

Formato de sa�da
O inteiro anterior e o sucessor, separados por um espa�o.

Exemplos de:
Entrada
4610

Sa�da
4609 4611
*/
