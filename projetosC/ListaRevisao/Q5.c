#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	
	//G>C    C>G    T>A    A>U
	
	int i;
	char dna[] = "ACGTACATGACATGA";
	char rna[40];
	
	for (i=0; i<strlen(dna); i++){
		if(dna[i] == 'G'){
			rna[i] = 'C';
			} else if (dna[i] =='C'){
			rna[i] = 'G';
			} else if (dna[i] =='T'){
			rna[i] = 'A';
			} else if (dna[i] =='A'){
			rna[i] = 'U';
			}			
	}
	rna [i] = '\0';
	
	printf("Fita DNA: %s\n", dna);
	printf("Fita RNA: %s\n", rna);	
	
	return 0;
}
