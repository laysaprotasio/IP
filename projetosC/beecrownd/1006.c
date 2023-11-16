#include <stdio.h>
#include <stdlib.h>

int main (){

    double A, B, C, media;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    media = ((A*2)+(B*3)+(C*5))/(2+3+5);
    printf("MEDIA = %.1lf\n", media);

}