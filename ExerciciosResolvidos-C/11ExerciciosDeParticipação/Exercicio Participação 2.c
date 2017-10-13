#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float ax, ay, bx, by;

    printf("Digite ax: ");
    scanf("%f", &ax );

    printf("Digite ay: ");
    scanf("%f", &ay );

    printf("Digite bx: ");
    scanf("%f", &bx );

    printf("Digite by: ");
    scanf("%f", &by );

    int valor1 = bx - ax;
    int valor2 = by - ay;

    float resolverPotencia = pow(valor1, 2) + pow(valor2, 2);

    float valorCoordenada = sqrt(resolverPotencia);

    printf("%.2f", valorCoordenada);

    return 0;
}
