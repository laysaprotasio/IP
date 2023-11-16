#include <stdio.h>
#include <stdlib.h>

int main (){

    float i, j;
    int contador;
    contador = 0;
    j = 1;
    i = 0;

   while (i < 2.2){
        while (contador < 3){
            if(i>0 && i<1 || i>1 && i<2){
		    printf("I=%.1f J=%.1f\n", i, j);
            } else {
                printf("I=%.0f J=%.0f\n", i, j);
            }
        j++;
        contador++;
        }
    i = i + 0.2;
    j = j - 3;
    j = j + 0.2;
    contador = 0;
   }
    return 0;
}