#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, numA, numB, tabuada;

    scanf("%d %d", &numA, &numB);

    if(numA > 0 && numB >0)
    {
        for(i = 1; i <= numB; i++)
        {
            tabuada = numA * i;
            printf("%d x %d = %d\n", numA,i, tabuada);
        }
    }
    else
    {
        exit(0);
    }
    return 0;
}
