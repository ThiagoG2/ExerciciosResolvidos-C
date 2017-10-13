#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, posicao, menor = 0;

    scanf("%d", &n);

    int vetor[n];

    for(i = 0; i < n ; i++){
        scanf("%d", &vetor[i]);

        if(menor == 0){
            menor = vetor[i];
            posicao = i;
        }

        if(menor > vetor[i]){
            menor = vetor[i];
            posicao = i;
        }

    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d", posicao);

    return 0;
}
/*
Descri��o:
Escrever um programa que l� um n�mero N. Este N � o tamanho de um array.

Em seguida, leia cada um dos N n�meros do array, encontre o menor elemento desse array, a sua posi��o dentro do array
e imprima essas informa��es.

Considere que o array come�a na posi��o 0

Formato de entrada
A primeira linha da entrada cont�m um inteiro N (1 <N <1000), indicando o n�mero de elementos que devem ser lidos no array
de n�meros inteiros. A segunda linha cont�m cada um dos valores de N, separadas por um espa�o.

Obs: n�o haver�o n�meros repetidos.

Formato de sa�da
A primeira linha exibe a mensagem "Menor valor:" seguido por um espa�o e o menor n�mero lido na entrada.
A segunda linha exibe a mensagem "POSI��O:" seguido por um espa�o e a posi��o do array em que o menor n�mero � encontrado,
lembrando que o array come�a na posi��o zero.

Exemplos de:
Entrada
10
1 2 3 4 -5 6 7 8 9 10

Sa�da
Menor valor: -5
Posicao: 4
*/
