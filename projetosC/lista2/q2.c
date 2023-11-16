#include <stdio.h>
#include <stdlib.h>

int main (){

    int i, j;
    i = 1;
    j = 7;

    while (i <= 9){
        while (j >= 5){
            printf("I=%d J=%d\n", i, j);
            j = j-1;   
        }
    i = i+2;
    j = 7;
    }

    return 0;
}