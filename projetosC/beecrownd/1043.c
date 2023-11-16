#include <stdio.h>
#include <stdlib.h>

int main (){
    float A, B, C, p, a;

    scanf("%f %f %f", &A, &B, &C);

    if(A< B+C){
        if(B< A+C){
            if(C< A+B){
                p = A+B+C;
                printf("Perimetro = %.1f\n", p);
            }
        }
    } else{
        a = ((A+B)*C)/2;
        printf("Area = %.1f\n", a);
    }

}
