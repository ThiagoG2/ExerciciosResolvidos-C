#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dias, km, valorDias;
   float conta;

    scanf("%d %d", &dias, &km);

    if(km > 100 && dias >= 1)
    {
        int pagamentoKm = km - (dias * 100);
        int valorKm = pagamentoKm * 12;
        valorDias = dias * 90;
        conta = valorKm + valorDias;
        printf("%.2f", conta);
    }
    else
    {
        conta = dias * 90;
        printf("%.2f", conta);
    }

    return 0;
}
/*
Descri��o:
A Locadora de Ve�culos Eudora lan�ou uma grande promo��o esse m�s: pagando apenas R$ 90 por di�ria,
o cliente pode alugar um carro de passeio. Para cada di�ria, o cliente recebe uma cota de quilometragem
de 100 Km. Cada quil�metro a mais custar� uma taxa extra de R$ 12.

Escreva um programa que receba como entrada a quantidade de dias e a quilometragem total rodada por um
cliente dessa locadora e exiba o valor total a ser pago com duas casas decimais.

Formato de entrada
Dois valores inteiros, separados por uma quebra de linha

Formato de sa�da
Um valor real com duas casas decimais

Exemplos de:
Entrada
1
80

Sa�da
90.00
*/
