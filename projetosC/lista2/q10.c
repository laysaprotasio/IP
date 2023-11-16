#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, t, j, N[1000];

    scanf("%d", &t);

    for (i = 0; i < 1000; i++)
    {
        if (i < t)
        {
            N[i] = i;
        } else{
        N[i] = i%t;
        }
    }
    for (j = 0; j < 1000; j++)
    {
        printf("N[%d] = %d\n", j, N[j]);
    }
    return 0;
}