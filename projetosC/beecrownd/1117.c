#include <stdio.h>
#include <stdlib.h>

int main (){
    float n1, n2, media;
    n1 = -1;
    n2 = -1;
    while(n1<0 || n1>10){
        scanf("%f", &n1);
        if(n1<0 || n1>10){
            printf("nota invalida\n");
        }
    }
     while(n2<0 || n2>10){
        scanf("%f", &n2);
        if(n2<0 || n2>10){
            printf("nota invalida\n");
        }
    }

    media = (n1+n2)/2;
    printf("media = %.2f", media);

    return 0;
}