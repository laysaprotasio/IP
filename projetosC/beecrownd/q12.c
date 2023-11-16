#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, v[8], p[8], n[8], proxP, proxN;
    proxP = 0;
    proxN = 0;

    for (i = 0; i < 8; i++)
    {
        scanf("%d", &v[i]);

        if (v[i] > 0)
        {
            p[proxP] = v[i];
            proxP++;
        }
        else
        {
            n[proxN] = v[i];
            proxN++;
        }
    }
    for (i = 0; i < 8; i++)
    {
        printf("v[8] = %d\n", v[i]);
    }
    for (i = 0; i < proxP; i++)
    {
        printf("positivos = %d\n", p[i]);
    }
    for (i = 0; i < proxN; i++)
    {
        printf("negativos = %d\n", n[i]);
    }
    return 0;
}