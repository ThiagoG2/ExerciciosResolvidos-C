#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura, imc;

    printf("Digite o seu peso!");
    scanf("%f", &peso);

    printf("Digite a sua altura!");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 17)
    {
        printf(" Muito abaixo do peso ");
    }
    else if(imc >= 17 && imc <= 18.49)
    {
        printf(" Abaixo do peso ");
    }
    else if(imc >= 18.5 && imc <= 24.99 )
    {
        printf(" Peso Normal ");
    }
    else if(imc >= 25 && imc <= 29.99)
    {
        printf(" Acima do peso ");
    }
    else if(imc >= 30 && imc <= 34.99 )
    {
        printf(" Obesidade I ");

    }
    else if(imc >= 35 && imc <= 39.99)
    {
        printf(" Obesidade II (SEVERA) ");
    }
    else
    {
        printf(" Obesidade III (mórbida) ");
    }

    return 0;
}
