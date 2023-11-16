#include <stdio.h>
#include <stdlib.h>

int main (){

    int n, i;
    float somador;

    somador = 0;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        somador = somador +(1.0/i);
    }

    printf("SOMA = %.2f\n", somador);
    return 0;
}