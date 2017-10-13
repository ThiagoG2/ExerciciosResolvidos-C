#include <stdio.h>
#include <stdlib.h>
/*
Descrição:
Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo o seu resultado na variável X.

Imprima X conforme o exemplo de entrada saída apresentado. Não apresente mensagem alguma além daquilo que
está sendo especificado e não esqueça de imprimir quebra de linha após o resultado.

Formato de entrada
O arquivo de entrada contém 2 valores inteiros.

Formato de saída
Imprima a variável X conforme caso de saída.

Exemplos de:
Entrada
0
1

Saída
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

