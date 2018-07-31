#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mayuscula(char secuencia[1000], int lensecuencia, char subsecuencia[100], int lensubsecuencia){
	int a, b;
	for (a=0; a<lensecuencia; a++){
		for (b=0; b<lensubsecuencia; b++){
			if(secuencia[a]==subsecuencia[b]){
				if (secuencia[a]==97){ 
				secuencia[a]=65;
				}
				if (secuencia[a]==116){
					secuencia[a]=84;
				}
				if (secuencia[a]==99){
					secuencia[a]=67;
				}
				else if (secuencia[a]==103){
					secuencia[a]=71;
				}	
			}
		}
	}
	printf("\n");
	return 0;
}	 	
		
int main (){
	int cambio;
	char secuencia [1000]="gtgggggggtttatgcctttagaacagcagactactgataactccaatcctgggttgaaaatgccaagggcgccagagagccaaacgatgagcgttggaccacaaacgataaaaactcactttctccgtggggtgaaagcgattctttctggcccgtatccgccagcacttaaagttgcattcggcgcggccctaccgctgctaattggggtaattgtcctaggattgtacgtaacgcttggcgggcacagccgcaagaaagcccacgcagccgcgatagatgctttggtcgagaagcacgaagcatgctacaaggtccaagcaaagattgcacacggcaggcttgccttacagtccgctgtggtgtctgttgcggatgccagcatgcaacaactccagttcgtgcagcaaggaattctcatgtgtgtcggagagctcgacgatatgcagaagttccggacccgactggataatgaaatcagtgccatcaaccagcgaattcccagcattgtcgaggaggtaagaaaacacaccgacgatgcgcttgagtggaatcttgctagaaccaagaacattttagagggcactgaagagcgcctgaaggatatgggcaatgagttggtgcgctacctagacgatgctcgcgccctcattgaaaatgcacgtatagctgcaggatcaatgcaacacctcgttggtgatgaggtgagaaagcagcttgctgaggttctagtaaaagttgcagaagtaagtaatggctttattgcgcttaagaagagtgtatctggctatttggaaaaaagcagtggacttgttgctagggaagttagggcaatcctggatgaccgcatgcgaagcctgcggaccatgtacaaaatgtgggatgcagaacaaaactccgtagtcagcgtgtgtaccacgctccaaaaggcaagcatggaggctgccgcggtagcaagt";
	char subsecuencia[100];
	
	printf ("Ingrese una subsecuencia (maximo 100 aminoacidos): ");
	scanf ("%s", subsecuencia);
	cambio = mayuscula(secuencia, strlen(secuencia), subsecuencia, strlen(subsecuencia));
	
	printf ("%d", cambio);
	printf("Secuecnia original: \n%s\n", secuencia); 
	mayuscula(subsecuencia, strlen(secuencia), subsecuencia, strlen(subsecuencia));
	printf ("Sub secuencia ingresada: %s\n", subsecuencia);
		
	return 0; 
}

