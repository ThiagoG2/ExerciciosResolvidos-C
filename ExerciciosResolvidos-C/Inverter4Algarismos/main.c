#include <stdio.h>
#include <stdlib.h>
/*
Descrição:
Faça um programa que inverta um número inteiro com quatro algarismos.

Formato de entrada
Você receberá um único número inteiro com quatro algarismos.

Formato de saída
Você deve imprimir o número invertido seguido de um final de linha.

Importante: se o número dado for 3000 por exemplo, o invertido dele deve ser 3 e não 0003.

Exemplos de:
Entrada
1234

Saída
4321
*/
int main()
{
    int numeroOrdenado;
    scanf("%d", &numeroOrdenado);

    int primeiroNumero = numeroOrdenado / 1000;
    int segundoNumero = (numeroOrdenado % 1000) / 100;
    int terceiroNumero = (numeroOrdenado % 100) / 10;
    int quartoNumero = numeroOrdenado % 10;

    if(segundoNumero == 0 && terceiroNumero == 0 && quartoNumero == 0)
    {
        printf("%d", primeiroNumero);
    }
    else
    {
        printf("%d%d%d%d", quartoNumero, terceiroNumero, segundoNumero, primeiroNumero);

    }
    return 0;
}
