#include <stdio.h>
#include <stdlib>

int main () {

    float m1, m2, area, potencia;

    printf("Digite a primeira dimensão do comodo\n");
    scanf("%f", &m1);
    printf("Digite a segunda dimensão do comodo\n");
    scanf("%f", &m2);

    area = m1*m2;
    printf("area do comodo: %f", area);

    return 0;
}