#include <stdio.h>
#include <stdlib.h>

int main (){

    float h, m, s;

    scanf("%f %f", &h, &m);

    printf("A hora convertida em minutos é %.2f\n", h*60);
    printf("Total de minutos: %.2f\n", (h*60)+m);
    printf("Total de segundos: %.2f\n", ((h*60)+m)*60);

    return 0;

}