#include <stdio.h>
#include <stdlib.h>
/*
Descri��o
Dados tr�s n�meros em ponto flutuante queremos saber quantos deles est�o acima da m�dia aritm�tica.

Formato de entrada
Tr�s n�meros positivos, menores ou iguais a 10.0 e com dois decimais, no m�ximo.

Formato de sa�da
A quantidade dos que est�o acima da m�dia.
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
