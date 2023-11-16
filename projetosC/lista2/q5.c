#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i, a, j, s, p;
    s = 0;

    scanf("%d\n", &n);
    int valorx[n], valory[n], soma[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &valorx[i], &valory[i]);
        if (valorx[i] > valory[i])
        {
            a = valorx[i];
            valorx[i] = valory[i];
            valory[i] = a;
        }
        for (j = valorx[i] + 1; j < valory[i]; j++)
        {
            if (j % 2 != 0)
            {
                s = s + j;
            }
        }
        soma[i] = s;
        s = 0;
        
    }
    for(p = 0; p < n; p++){
        printf("%d\n", soma[p]);
    }
    return 0;
}