#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    int i, prox;
    char palavra[20], vogais[20];
    prox = 0;

    scanf("%s", &palavra);

    for(i = 0; i< strlen(palavra); i++){
        if(palavra[i] == 'A' || palavra[i] == 'a'){
            vogais[prox] = palavra[i];
            prox++;
        } else if (palavra[i] == 'E' || palavra[i] == 'e'){
            vogais[prox] = palavra[i];
            prox++;
        } else if (palavra[i] == 'I' || palavra[i] == 'i'){
            vogais[prox] = palavra[i];
            prox++;
        } else if (palavra[i] == 'O' || palavra[i] == 'o'){
            vogais[prox] = palavra[i];
            prox++;
        } else if (palavra[i] == 'U' || palavra[i] == 'u'){
            vogais[prox] = palavra[i];
            prox++;
        } 
    }
    
    vogais[prox] = '\0';

    printf("%s\n", palavra);
    printf("%s\n", vogais);

    return 0;
}