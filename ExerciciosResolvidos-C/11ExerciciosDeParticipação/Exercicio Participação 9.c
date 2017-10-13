#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int triangulo(int A, int B, int C)
{
    if(A < (B+C) && B < (A+C) && C < (A+B))
    {
        if(A==B && B==C)
        {
            return 1;
        }
        else if(A==B || A==C || B==C)
        {
            return 0;
        }
        else
        {
            return 3;
        }
    }
    else
    {
        return 4;
    }
}

int main()
{
    int a, b, c;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o tamanho do lado A de seu triangulo: ");
    scanf("%d", &a);
    printf("Digite o tamanho do lado B de seu triangulo: ");
    scanf("%d", &b);
    printf("Digite o tamanho do lado C de seu triangulo: ");
    scanf("%d", &c);

    triangulo(a,b,c);

    if(triangulo(a,b,c) == 1)
    {
        printf("%d - Triângulo Equilátero", triangulo(a,b,c));
    }
    else if(triangulo(a,b,c) == 0)
    {
        printf("%d - Triângulo Isosceles", triangulo(a,b,c));
    }
    else if(triangulo(a,b,c) == 3)
    {
        printf("%d - Triângulo Escaleno", triangulo(a,b,c));
    }
    else if(triangulo(a,b,c) == 4)
    {
        printf("%d - Não é um triângulo", triangulo(a,b,c));
    }

    return 0;
}


