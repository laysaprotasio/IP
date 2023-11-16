#include <stdio.h>
#include <stdlib.h>

int main (){

    float comprimento, largura, area, potencia;

    scanf("%f %f", &comprimento, &largura);
    area = comprimento * largura;
    potencia = area * 18;

    printf("area = %.2f metros quadrados\n", area);
    printf("potencia de iluminacao = %.2f W\n", potencia);

    return 0;
}