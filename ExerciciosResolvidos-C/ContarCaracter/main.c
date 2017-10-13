#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 50
int main()
{
    char cara[MAXSIZE];
    char carac;
    int tamanho, i, contador=0;
    gets(cara);

    scanf(" %c", &carac);
    tamanho = strlen(cara);
    for(i=0; i<tamanho; i++)
    {
        if(cara[i] == carac)
        {
            contador++;
        }
    }
    printf("%d", contador);

    return 0;
}
