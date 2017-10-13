#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor,k = 0, i = 1, x, y, valorDado = 1;

    while(valorDado != 0)
    {
        scanf("%d", &valorDado);

        if(valorDado % 2 == 1 && valorDado >=1 && valorDado <= 10000)
        {
            for(i = 1; i != 0; i++)
            {
                x = pow(i, 2);
                y = pow(k, 2);
                valor = x - y;
                k++;

                if(valorDado == valor)
                {
                    printf("%d - %d\n", x, y);
                    k=0;
                    i=0;
                    scanf("%d", &valorDado);
                }
                else if(valorDado == 0 || valorDado % 2 != 1 || valorDado < 0)
                {
                    exit(0);
                }
            }
        }

        else
        {
            return 0;
        }
    }
}


/*
Descrição:
Bernardo é um garoto que adora números e curiosidades matemáticas. Certo dia, enquanto tomava banho
(ocasião essa que costuma ser propícia para ter boas ideias), lhe ocorreu uma epifania matemática: todo número ímpar
é a diferença de dois quadrados consecutivos.
Terminada sua sessão de higiene, Bernardo começou a rabiscar suas ideias, observando as propriedades interessantes que os
números carregavam:

1 - 0 = 1

4 - 1 = 3

9 - 4 = 5

16 - 9 = 7

25 - 16 = 9


Tendo se divertido o suficiente com sua descoberta, desafiou seu amigo estudante de Engenharia da Computação a fazer um
programa que escrevesse um número ímpar como a diferença de dois quadrados, para que ele nunca mais se esquecesse da ideia
que teve.

Formato de entrada
A entrada consiste de vários casos de teste. Em cada linha teremos um inteiro ímpar x(1 <= x <= 10000), e na última linha o
número 0.

Formato de saída
Para cada inteiro dado como entrada, mostrar este escrito como diferença de dois quadrados. no formato dado na saída

Exemplos de:
Entrada
3
5
571
0

Saída
4 - 1
9 - 4
81796 - 81225
*/
