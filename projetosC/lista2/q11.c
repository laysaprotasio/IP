#include <stdio.h>
#include <stdlib.h>

int main()
{
    double N[100];
    int i, j;
    scanf("%lf", &N[0]);

    for (i = 1; i <100; i++)
    {
     N[i] = N[i - 1] / 2;
    }
    for (j = 0; j < 100; j++)
    {
        printf("N[%d] = %.4lf\n", j, N[j]);
    }
    return 0;
}