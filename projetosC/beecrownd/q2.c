#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){

    int n1, n2, n3; // Números naturais
    int qs, sq; // qs = quadrado da soma e sq = soma dos quadrados

    printf ("Digite tres numeros naturais:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    qs = pow((n1+n2+n3),2);
    sq = pow(n1,2) + pow(n2,2) + pow(n3,2);

    printf("Diferenca: %d", qs-sq);

    return 0;
}