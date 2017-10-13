#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tamVetor 20

void atualiza(int *numeros, int tamanho, int original, int novo)
{
    int i;
    for(i=0; i<tamanho; i++)
    {
        if(numeros[i]==original && novo >= 0)
        {
            numeros[i]= novo;
        }
    }
}

int main()
{
    int vetor[tamVetor];
    int tamanhoVetor, i, original, novo;

    setlocale(LC_ALL, "Portuguese");

    do
    {
        printf("Digite o tamanho do vetor, o tamanho máximo é 20:\n");
        scanf("%d", &tamanhoVetor);
    }
    while(tamanhoVetor > 20 || tamanhoVetor < 1);

    for(i=0; i<tamanhoVetor; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor de original:\n");
    scanf("%d", &original);
    printf("Digite o valor de novo:\n");
    scanf("%d", &novo);

    atualiza(vetor,tamanhoVetor,original,novo);

    printf("Vetor:\n");
    for(i=0; i<tamanhoVetor; i++)
    {
        printf("%d",vetor[i]);
    }

    return 0;
}
