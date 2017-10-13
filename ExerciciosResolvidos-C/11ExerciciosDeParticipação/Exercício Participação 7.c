#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("Digite um número para calcular o fatorial:\n");
    scanf("%d", &num);

    printf("O fatorial de %d é: %d", num, fatorial(num));

    return 0;

}

int fatorial(int numero)
{
    int i;
    int fat = 1;

    for(i = numero; i > 0; i--)
    {
        fat = fat * i;
    }

    return fat;
}
