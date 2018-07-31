//Ordene utilizando algún método la cadena de ADN.
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void ordenamiento_insercion (char nucleotido[] , int n){
	int a, b;
	int auxiliar;
	for (a=1; a<n; a++){
		b=a;
		auxiliar = nucleotido[a];
		while (b>0 && auxiliar<nucleotido[b-1]){
			nucleotido[b]=nucleotido[b-1];
			b--;
		}
		nucleotido[b]=auxiliar;
	}
}

void seleccion (char nucleotido[], int n){
	int indicemenor, a, b;
	
	for(a=0; a<n-1; a++){
		indicemenor=a;
		for(b=a+1; b<n; b++){
			if (nucleotido[b]<nucleotido[indicemenor])
			indicemenor=b;
			if(a!= indicemenor){
				int auxiliar=nucleotido[a];
				nucleotido[a]=nucleotido[indicemenor];
				nucleotido[indicemenor]=auxiliar;
			}
		}		
	}	
}

int main(){
	char nucleotido[10000]={"gtgggggggtttatgcctttagaacagcagactactgataactccaatcctgggttgaaaatgccaagggcgccagagagccaaacgatgagcgttggaccacaaacgataaaaactcactttctccgtggggtgaaagcgattctttctggcccgtatccgccagcacttaaagttgcattcggcgcggccctaccgctgctaattggggtaattgtcctaggattgtacgtaacgcttggcgggcacagccgcaagaaagcccacgcagccgcgatagatgctttggtcgagaagcacgaagcatgctacaaggtccaagcaaagattgcacacggcaggcttgccttacagtccgctgtggtgtctgttgcggatgccagcatgcaacaactccagttcgtgcagcaaggaattctcatgtgtgtcggagagctcgacgatatgcagaagttccggacccgactggataatgaaatcagtgccatcaaccagcgaattcccagcattgtcgaggaggtaagaaaacacaccgacgatgcgcttgagtggaatcttgctagaaccaagaacattttagagggcactgaagagcgcctgaaggatatgggcaatgagttggtgcgctacctagacgatgctcgcgccctcattgaaaatgcacgtatagctgcaggatcaatgcaacacctcgttggtgatgaggtgagaaagcagcttgctgaggttctagtaaaagttgcagaagtaagtaatggctttattgcgcttaagaagagtgtatctggctatttggaaaaaagcagtggacttgttgctagggaagttagggcaatcctggatgaccgcatgcgaagcctgcggaccatgtacaaaatgtgggatgcagaacaaaactccgtagtcagcgtgtgtaccacgctccaaaaggcaagcatggaggctgccgcggtt"};
	printf ("secuencia de nucleotidos\n");
	printf ("\n");
	printf("%s\n\n ",nucleotido);		
	ordenamiento_insercion(nucleotido, strlen(nucleotido));
	printf ("		Secuencia de nucleotidos ordenada alfabeticamente\n");
	printf ("\n");
	printf ("%s\n", nucleotido);
		
	return 0;
}

