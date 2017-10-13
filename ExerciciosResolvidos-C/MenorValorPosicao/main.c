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
Descrição:
Escrever um programa que lê um número N. Este N é o tamanho de um array.

Em seguida, leia cada um dos N números do array, encontre o menor elemento desse array, a sua posição dentro do array
e imprima essas informações.

Considere que o array começa na posição 0

Formato de entrada
A primeira linha da entrada contém um inteiro N (1 <N <1000), indicando o número de elementos que devem ser lidos no array
de números inteiros. A segunda linha contém cada um dos valores de N, separadas por um espaço.

Obs: não haverão números repetidos.

Formato de saída
A primeira linha exibe a mensagem "Menor valor:" seguido por um espaço e o menor número lido na entrada.
A segunda linha exibe a mensagem "POSIÇÃO:" seguido por um espaço e a posição do array em que o menor número é encontrado,
lembrando que o array começa na posição zero.

Exemplos de:
Entrada
10
1 2 3 4 -5 6 7 8 9 10

Saída
Menor valor: -5
Posicao: 4
*/
