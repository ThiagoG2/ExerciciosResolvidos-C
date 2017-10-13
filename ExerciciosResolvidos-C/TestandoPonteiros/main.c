#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcular(float a, float b, char operacao, float *resultado)
{

    switch( operacao )
    {
    case '+' :
        *resultado = a + b;

        break;

    case '-' :
        *resultado = a - b;

        break;

    case '/' :
        *resultado = a / b;

        break;

    case '*' :
        *resultado = a * b;

        break;

    default:
        exit(0);

    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float a, b,resultado;
    char c;
    float *valor;
    valor = &resultado;

    printf("Digite um número para a operação:\n");
    scanf("%f", &a);
    printf("Digite um número para a operação:\n");
    scanf("%f", &b);
    printf("Digite o simbolo da operação:\n");
    scanf("%s", &c);

    calcular(a,b,c,&resultado);

    printf("%.2f", resultado);

    return 0;
}
