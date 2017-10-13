#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int main ()
{

    int i,n;
    char frase[MAX];

    scanf ("%d", &n);
    while(n != 0){
    for (i=0; i<n; i++)
    {
        scanf(" %c", &frase[i]);
    }

    for (i=n-1; i>=0; i--)
    {
        printf("%c", frase[i]);
    }
    printf("\n");

    scanf ("%d", &n);
    }

    return 0;
}
/*
Descrição:
Você deve ler uma sequência de caracteres e imprimir na ordem inversa da leitura.

Formato de entrada
Consiste de um inteiro n, indicando quantos caracteres devem ser lidos e uma sequencia de n caracteres. A entrada termina
quando n=0.
Considere que n é sempre n<=100000.

Formato de saída
n caracteres impressos na ordem inversa

Exemplos de:
Entrada
7
abacate
4
casa
0

Saída
etacaba
asac
*/
