#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ig, ia, encap, indent, structs;
    scanf("%d %d %d %d %d", &ig, &ia, &encap, &indent, &structs);

    if(ig == 1 || ia == 1)
    {
        if(encap == 1 && indent == 1)
        {
            if(structs == 1)
            {
                printf("AVALIADO");
            }
            else
            {
                printf("0");
            }
        }
        else
        {
            printf("0");
        }
    }
    else
    {
        printf("0");
    }
    return 0;
}
/*
Descrição:
Toda apresentação de trabalho tem seus requisitos mínimos, que precisam ser atendidos, caso contrário, o trabalho
 não é aceito e o aluno fica com nota 0.

A apresentação de Programação 1 está chegando, e o Professor Baldoino deixou claro que se os trabalhos não passassem
por todos os requisitos mínimos, ele não iria julgar o trabalho.

Eis os requisitos:

Requisito 1: Inferface gráfica OU Inteligência Artificial.
Requisito 2: Encapsulamento E Indentação.
Requisito 3: Uso de Structs

Dada a entrada, descubra se o aluno ficou com 0 ou o seu trabalho será avaliado.

Formato de entrada
A entrada é composta de 5 números, representando respectivamente Interface Gráfica, Inteligência Artificial,
Encapsulamento, Indentação e Structs.

Os números podem ser:
0 - Se o trabalho não possui tal quesito.
1 - Se o trabalho possui tal quesito.

Formato de saída
Deve imprimir o número 0, se o aluno não atender aos requisistos e ficará com zero, e a frase "AVALIADO" se ele
atendeu aos requisitos mínimos.
Seguidos de uma quebra de linha.

Exemplos de:
Entrada
1 0 1 1 1

Saída
AVALIADO
*/
