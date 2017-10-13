#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Z;

    scanf("%d", &X);

    do
    {
        scanf("%d", &Z);
    }
    while(Z <= X);

    int contador = 1;
    int i;

    for(i = X; i <= Z; contador++)
    {
        i = i + X + contador;
    }
    printf("%d\n", contador);

    return 0;
}
/*
Descri��o:
Escreva um programa que l� dois inteiros: X e Z (Z deve ser lido tantas vezes quantas forem necess�rias, at� que um n�mero
maior do que X � lido). Contar quantos n�meros inteiros devem ser somados em sequ�ncia (a partir de e incluindo a X), de modo
que a soma excede Z o m�nimo poss�vel e escrever este n�mero.

A entrada pode ter, por exemplo, os n�meros 21, 21, 15, 30. Neste caso, o n�mero 21, � assumido para o X, Os n�meros 21
e 15 devem ser ignorados, porque eles s�o menores ou iguais a X. O n�mero 30 est� dentro da especifica��o (superior a X) e
� v�lido. Assim, o resultado final deve ser de 2 para este caso de teste, porque a soma (21 + 22) � maior do que 30.

Formato de entrada
A entrada cont�m apenas valores inteiros, um por linha, que pode ser positivo ou negativo. O primeiro n�mero � o valor de X.
A pr�xima linha conter� Z. Se Z n�o atende a especifica��o do problema, deve-se ler de novo, quantas vezes forem necess�rias.

Formato de sa�da
Imprima uma linha com um n�mero inteiro representando a quantidade de n�meros inteiros que devem ser somadas, seguido
de uma quebra de linha.

Exemplos de:
Entrada
3
1
20

Sa�da
5
*/
