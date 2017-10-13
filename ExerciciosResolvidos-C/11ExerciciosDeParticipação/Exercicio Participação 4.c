#include <stdio.h>
#include <stdlib.h>

int main()
{
    float diaria = 50.00;
    int qtdDias;
    float taxa;

    printf("Digite quantos dias você ficou no hotel!");
    scanf("%d", &qtdDias);

    if(qtdDias > 15)
    {
        taxa = (qtdDias * diaria) + (qtdDias * 8.50);
        printf("Taxa a pagar: %.2f", taxa);
    }
    else if(qtdDias == 15)
    {
        taxa = (qtdDias * diaria) + (qtdDias * 10.00);
        printf("Taxa a pagar: %.2f", taxa);
    }
    else
    {
        taxa = (qtdDias * diaria) + (qtdDias * 15.30);
        printf("Taxa a pagar: %.2f", taxa);
    }


    return 0;
}
