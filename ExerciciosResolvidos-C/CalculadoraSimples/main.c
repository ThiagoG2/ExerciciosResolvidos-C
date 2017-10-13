#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1, num2, soma, subtracao, multi, div;

    printf("Calculadora OP\n");
    printf("faca seus calculos:");
    scanf("%i%i", &num1, &num2 );

     int soma            = num1 + num2;
     int subtracao       = num1 - num2;
     int multi           = num1 * num2;
     int div             = num1 / num2;

    printf("A soma e:%i\n", soma);
    printf("A subtracao e:%i\n", subtração);
    printf("O produto e:%d\n", multi);
    printf("A divisao e:%d\n", div);

    return 0;
}
