#include <stdio.h>
#include <stdlib.h>

int main (){

    int mes[4], i, menor, maior, MES;

    for(i = 0; i< 4; i++){
        scanf("%d", &mes[i]);
        
        if(i == 0){
            maior = mes[i];
            menor = mes[i];
        } else if(mes[i]> maior){
            maior = mes[i];
        } else if(mes[i]< menor){
            menor = mes[i];
        }
    }

    if(maior == mes[0]){
        printf(Maior temperatura: %d, no mês de Janeiro, )
    }
 

return 0;
}