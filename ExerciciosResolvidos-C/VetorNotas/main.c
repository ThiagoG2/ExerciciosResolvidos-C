#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j, contadorMaior = 0, contadorMenor = 0;
    float maior = 0, menor = 0;
    float vetor[8];

    for(i = 1; i <= 8; i++){
        scanf("%f", &vetor[i]);

        if(maior == 0){
            maior = vetor[i];
        }

         if(menor == 0){
            menor = vetor[i];
        }

        if(maior < vetor[i] ){
            maior = vetor[i];
        }

        if(menor > vetor[i]){
            menor = vetor[i];
        }
    }

    for(j = 1; j <= 8; j++){
            if(vetor[j] == maior){
                contadorMaior++;
            }
            if(vetor[j] == menor){
                contadorMenor++;
            }

    }

    printf("Menor nota: %.1f\nMaior nota: %.1f\n", menor, maior);
    printf("Quantidade de vezes que a menor nota se repetiu: %d\n", contadorMenor);
    printf("Quantidade de vezes que a maior nota se repetiu: %d\n", contadorMaior);

    return 0;
}
