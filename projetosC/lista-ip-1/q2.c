#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float na, nb, nc, media;
    int p1, p2, p3;
    p1 = 2;
    p2 = 3;
    p3 = 5;
    
    scanf ("%f", &na);
    scanf ("%f", &nb);
    scanf ("%f", &nc);
    
    media =((na*p1)+(nb*p2)+(nc*p3))/(p1+p2+p3);
    
    printf ("MEDIA = %.1f\n", media);
    
    return 0;
    }
    
