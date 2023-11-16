#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    char dna[20], rna[20];
    int i;

    scanf("%s", &dna);
    
    for(i=0; i<strlen(dna); i++){
        if (dna[i] == 'A'){
            rna[i] = 'U';
        } else if(dna[i] == 'C'){
            rna[i] = 'G';
        } else if(dna[i] == 'G'){
            rna[i] = 'C';
        } else if(dna[i] == 'T'){
            rna[i] = 'A';
        }
    }

    printf(" RNA = %s\n", rna);

    return 0;

}