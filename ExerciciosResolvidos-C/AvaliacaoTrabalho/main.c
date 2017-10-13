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
Descri��o:
Toda apresenta��o de trabalho tem seus requisitos m�nimos, que precisam ser atendidos, caso contr�rio, o trabalho
 n�o � aceito e o aluno fica com nota 0.

A apresenta��o de Programa��o 1 est� chegando, e o Professor Baldoino deixou claro que se os trabalhos n�o passassem
por todos os requisitos m�nimos, ele n�o iria julgar o trabalho.

Eis os requisitos:

Requisito 1: Inferface gr�fica OU Intelig�ncia Artificial.
Requisito 2: Encapsulamento E Indenta��o.
Requisito 3: Uso de Structs

Dada a entrada, descubra se o aluno ficou com 0 ou o seu trabalho ser� avaliado.

Formato de entrada
A entrada � composta de 5 n�meros, representando respectivamente Interface Gr�fica, Intelig�ncia Artificial,
Encapsulamento, Indenta��o e Structs.

Os n�meros podem ser:
0 - Se o trabalho n�o possui tal quesito.
1 - Se o trabalho possui tal quesito.

Formato de sa�da
Deve imprimir o n�mero 0, se o aluno n�o atender aos requisistos e ficar� com zero, e a frase "AVALIADO" se ele
atendeu aos requisitos m�nimos.
Seguidos de uma quebra de linha.

Exemplos de:
Entrada
1 0 1 1 1

Sa�da
AVALIADO
*/
