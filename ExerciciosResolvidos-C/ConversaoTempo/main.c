#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    scanf("%d", &numero);

    int horas = numero / 3600;
    int minutos = (numero / 60) % 60;
    int segundos = numero % 60;

    printf("%d:%d:%d", horas, minutos, segundos);

    return 0;

}
/*
Descrição:
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica
e informe-o expresso no formato horas:minutos:segundos.

Formato de entrada
O arquivo de entrada contém um valor inteiro N.

Formato de saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.

Exemplos de:
Entrada
556

Saída
0:9:16
*/
