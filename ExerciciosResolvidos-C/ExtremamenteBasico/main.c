#include <stdio.h>
#include <stdlib.h>
/*
Descri��o:
Leia 2 valores inteiros e armazene-os nas vari�veis A e B. Efetue a soma de A e B atribuindo o seu resultado na vari�vel X.

Imprima X conforme o exemplo de entrada sa�da apresentado. N�o apresente mensagem alguma al�m daquilo que
est� sendo especificado e n�o esque�a de imprimir quebra de linha ap�s o resultado.

Formato de entrada
O arquivo de entrada cont�m 2 valores inteiros.

Formato de sa�da
Imprima a vari�vel X conforme caso de sa�da.

Exemplos de:
Entrada
0
1

Sa�da
X = 1
*/
int main()
{
   int A;
   int B;

   scanf("%d", &A);
   scanf("%d", &B);

   int X = A + B;

   printf("X = %d", X);

}

