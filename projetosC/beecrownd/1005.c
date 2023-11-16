#include <stdio.h>

int main (){

    double A, B, media;
    double p1, p2; 
    p1 = 3.5;
    p2 = 7.5;

    scanf("%lf %lf", &A, &B);

    media = ((A*p1)+ (B*p2))/11;

    printf("MEDIA = %.5lf\n", media);


    return 0;
}