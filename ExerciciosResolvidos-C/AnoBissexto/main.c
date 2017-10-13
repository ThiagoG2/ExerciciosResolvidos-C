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
Descrição:
Chama-se ano bissexto o ano ao qual é acrescentado um dia extra, ficando ele com 366 dias, um dia a mais do que os anos normais de 365 dias, ocorrendo a cada quatro anos (exceto anos múltiplos de 100 que não são múltiplos de 400).

Faça um programa que indique se o ano digitado é bissexto.

Formato de entrada
Um número inteiro correspondendo ao ano.

Formato de saída
Se o ano for bissexto imprima:
BISSEXTO

Caso não seja, imprima:
NAOBISSEXTO
(perceba que não tem o acento)

Exemplos de:
Entrada
3000
Saída
NAOBISSEXTO

Entrada
20
Saída
BISSEXTO
*/


