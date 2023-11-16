#include <stdio.h>
#include <stdlib.h>

int main (){

    float i, j;
    int contador;
    i = 0;
    j = 1;
    contador = 0;

    while (i >= 0.2){
        while (contador < 3){
            printf("I=%.2f J=%.2f\n", i, j);
            j = j + 1;
            contador ++;  
        }
    i = i + 0.2;
    contador = 0;
    }

    return 0;
}