#include <stdio.h>
#include <stdlib.h>
/*
Descrição
Dados três números em ponto flutuante queremos saber quantos deles estão acima da média aritmética.

Formato de entrada
Três números positivos, menores ou iguais a 10.0 e com dois decimais, no máximo.

Formato de saída
A quantidade dos que estão acima da média.
*/
int main()
{
    float a, b, c;
    int i;
    scanf("%f %f %f", &a, &b, &c);

    float media = (a + b + c) / 3;
    int contador = 0;

    for(i = 0; i < 1; i++)
    {
        if(a > media)
        {
            contador++;
        }
        if(b > media)
        {
            contador++;
        }
        if(c > media)
        {
            contador++;
        }
    }
    printf("%d", contador);

    return 0;
}
