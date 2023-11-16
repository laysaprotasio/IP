#include <stdio.h>
#include <stdlib.h>

int main (){

    float i, j;
    int contador = 0;
    j = 1;
    i = 0;
    
    while(i < 2.2){
        while (contador < 3){
            if(i==0 || i==1 || i==2){
                printf("I=%d J=%d", (int)i, (int)j);
                printf("I=%d J=%d", (int)i, (int)j + 1);
                printf("I=%d J=%d", (int)i, (int)j + 2);
            } else {
                printf("I=%.1f J=%.1f\n", i, j);
                j = j +0.2;
                j = j +1;
                contador++;
            }
        }
    i = i + 0.2;
    contador = 0;
   }
 return 0;
}