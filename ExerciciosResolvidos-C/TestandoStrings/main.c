#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define MAXSIZE 100

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char vetor1[MAXSIZE];
    char vetor2[MAXSIZE];
    int tamanho;

    gets(vetor1);
    gets(vetor2);
    tamanho = strlen(vetor1);
    /*
    printf(strcat(vetor1,vetor2));
    Concatenação de strings, concatena o vetor2 ao final de vetor1, e vetor1 será as 2 palavras juntas;
    */
    if(!stricmp(vetor1,vetor2))
    {
        printf("As palavras são iguais!");
    }
    else
    {
        printf("As palavras são diferentes!");
    }

    printf("\n");

    printf("%s %d", strrev(vetor1), tamanho);

    return 0;
}
