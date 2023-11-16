#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float i, j;
    float soma = 0;
    j = 0;

    for (i = 1; i <= 39; i += 2)
    {
        soma = soma + i / pow(2, j);
        j++;
    }
    printf("%.2f\n", soma);

    return 0;
}