#include <stdio.h>
#include <stdlib.h>
/*
Descri��o:
Leia 2 valores de ponto flutuante de dupla precis�o A e B, que correspondem a 2 notas de um aluno.
A seguir, calcule a m�dia do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso
7.5 (A soma dos pesos portanto � 11). Assuma que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal.

Formato de entrada
O arquivo de entrada cont�m 2 valores com uma casa decimal cada um.

Formato de sa�da
Calcule e imprima a vari�vel MEDIA conforme exemplo abaixo, com 5 d�gitos ap�s o ponto decimal.
Utilize vari�veis de dupla precis�o (double) e como todos os problemas, n�o esque�a de imprimir
o fim de linha ap�s o resultado.

Exemplos de:
Entrada
5.0
7.1

Sa�da
MEDIA = 6.43182
*/
int main()
{
    float a;
    float b;

    scanf("%f", &a);
    scanf("%f", &b);

    float media = (a * 3.5)/11 + (b * 7.5)/11;

    printf("MEDIA = %.5f", media);

    return 0;
}
