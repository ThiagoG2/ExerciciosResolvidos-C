#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroOrdenado = 479;

    int primeiroNumero = numeroOrdenado / 100;

    int tirarNumerodoMeio = numeroOrdenado % 100;
    int numeroDoMeio = tirarNumerodoMeio / 10;

    int ultimoNumero = numeroOrdenado % 10;

    printf(" %d\n %d\n %d", primeiroNumero, numeroDoMeio, ultimoNumero);

    return 0;
}
