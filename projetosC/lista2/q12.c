#include <stdio.h>
#include <stdlib.h>

int main()
{
    int V[15], P[5], N[5];
    int i, j, proxP, proxN;

    for (i = 0; i < 15; i++)
    {
        scanf("%d", &V[i]);
    }
    proxP = 0;
    proxN = 0;

    for (i = 0; i < 15; i++)
    {
        if (V[i] % 2 == 0)
        {
            P[proxP] = V[i];
            proxP++;
            if (proxP == 5)
            {
                for (j = 0; j < 5; j++)
                {
                    printf("par[%d] = %d\n", j, P[j]);
                }
                proxP = 0;
            }
        }
        else
        {
            N[proxN] = V[i];
            proxN++;
             if (proxN == 5)
            {
                for (j = 0; j < 5; j++)
                {
                    printf("impar[%d] = %d\n", j, N[j]);
                }
                proxN = 0;
            }
        }
    }
    for (i = 0; i < proxN; i++)
    {
        printf("impar[%d] = %d\n", i, N[i]);
    }
    for (i = 0; i < proxP; i++)
    {
        printf("par[%d] = %d\n", i, P[i]);
    }
    return 0;
}