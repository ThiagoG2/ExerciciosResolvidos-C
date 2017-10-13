#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, saida = -1, maior = 0, menor = 100000, valor, contador, valorMultiplos = 0, contNum;

    while(i != 0)
    {
        scanf("%d", &valor);

        if(valor >= maior && valor > 0)
        {
            maior = valor;
        }

        if(valor <= menor && valor > 0)
        {
            menor = valor;
        }

        if(valor != saida && valor > 0)
        {
            printf("menor=%d||MAIOR=%d\n", menor, maior);
        }

        if(valor == saida)
        {
            for(contador = 1; valorMultiplos < maior; contador++)
            {
                valorMultiplos = contador * menor;
                if(valorMultiplos <= maior)
                {
                    printf("%d", valorMultiplos);
                    contNum = valorMultiplos + menor;
                }
                if(contNum > maior)
                {
                    exit(0);
                }
                else
                {
                    printf("||");
                }
            }
            exit(0);
        }

        i++;
    }

    return 0;
}
/*
Descrição:
Dada uma sequência de inteiros não negativos você deverá imprimir o menor inteiro e o maior inteiro até o momento.

A impressão deve ser feita a cada entrada de dado, ou seja, a resposta pode ser alterada a cada passo.

No final você receberá o número -1 indicando o final da entrada(não é para incluir o -1 na resposta).

Por fim, você deverá imprimir todos os múltiplos do menor número, que estão entre o menor e o maior (incluindo os dois
se for o caso).

Formato de entrada
uma sequência de inteiros seguida de -1.

Formato de saída
a cada inteiro você deverá imprimir o menor inteiro x e o maior inteiro y no formato "menor = x || MAIOR = y".
por fim você deverá imprimir todos os múltiplos de x que estão entre x e y incluso os dois, os números devem ser separados
por "||"..

Exemplos de:
Entrada
3
33
-1

Saída
menor=3||MAIOR=3
menor=3||MAIOR=33
3||6||9||12||15||18||21||24||27||30||33

Entrada
33
3
-1

Saída
menor=33||MAIOR=33
menor=3||MAIOR=33
3||6||9||12||15||18||21||24||27||30||33

Entrada
6
7
2
3
5
9
10
10
10
-1

Saída
menor=6||MAIOR=6
menor=6||MAIOR=7
menor=2||MAIOR=7
menor=2||MAIOR=7
menor=2||MAIOR=7
menor=2||MAIOR=9
menor=2||MAIOR=10
menor=2||MAIOR=10
menor=2||MAIOR=10
2||4||6||8||10

*/
