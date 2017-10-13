#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int potencia(int base, int expoente)
{
    int potencia = pow(base, expoente);

    return potencia;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int base, expoente;

    printf("----- Potênciação -----\n");

    printf("Digite o valor da base:\n");
    scanf("%d", &base);

    printf("Digite o valor do expoente:\n");
    scanf("%d", &expoente);

    potencia(base, expoente);

    printf("O valor da potência é: %d\n", potencia(base, expoente));

    return 0;

}


