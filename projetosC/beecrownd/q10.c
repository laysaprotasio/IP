#include <stdio.h>
#include <stdlib.h>

int main (){

    float n1, n2, n3;

    scanf("%f %f %f", &n1, &n2, &n3);

    if(n1 < n2 && n1 < n3){
        if(n2 < n3){
            printf("%f %f %f", n1, n2, n3);
        } else{
            printf("%f %f %f", n1, n3, n2);
        }
    } else if(n2< n1 && n2<n3){
        if(n1< n3){
            printf("%f %f %f", n2, n1, n3);
        } else{
            printf("%f %f %f", n2, n3, n1);
        }
    } else if (n3< n1 && n3<n2){
        if(n1<n2){
            printf("%f %f %f", n3, n1, n2);
        } else {
            printf("%f %f %f", n3, n2, n1);
        }
    }

    return 0;
}