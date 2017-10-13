#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int vetorA[10];
    int vetorB[10];
    int vetorC[10];

    for(i=0; i<10; i++)
    {
        scanf("%d", &vetorA[i]);
    }
    for(i=0; i<10; i++)
    {
        scanf("%d", &vetorB[i]);
        vetorC[i]= vetorA[i] + vetorB[i];
    }
    for(i=0; i<10; i++)
    {
        printf("%d ", vetorC[i]);
    }

    return 0;
}
