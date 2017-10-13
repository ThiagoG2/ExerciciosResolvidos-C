#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;

    scanf ("%d", &ano);

    if(ano % 4 == 0 && ano % 100 != 0)
    {
        printf ("BISSEXTO");
    }
    else if(ano % 400 == 0)
    {
        printf ("BISSEXTO");
    }
    else
    {
        printf ("NAOBISSEXTO");
    }
    return 0;
}
/*
Descri��o:
Chama-se ano bissexto o ano ao qual � acrescentado um dia extra, ficando ele com 366 dias, um dia a mais do que os anos normais de 365 dias, ocorrendo a cada quatro anos (exceto anos m�ltiplos de 100 que n�o s�o m�ltiplos de 400).

Fa�a um programa que indique se o ano digitado � bissexto.

Formato de entrada
Um n�mero inteiro correspondendo ao ano.

Formato de sa�da
Se o ano for bissexto imprima:
BISSEXTO

Caso n�o seja, imprima:
NAOBISSEXTO
(perceba que n�o tem o acento)

Exemplos de:
Entrada
3000
Sa�da
NAOBISSEXTO

Entrada
20
Sa�da
BISSEXTO
*/


