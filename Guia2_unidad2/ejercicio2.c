//Escriba un programa que cree una matriz cuadrada A de NxN, luego rellenela de ceros y asigne 1 en su diagonal principal En otras palabras genere una matriz identidad2 de 6x6
#include <stdio.h>

int tamano_matriz (){
	int m;
	printf("Ingrese el tamaño de la matriz: ");
	scanf ("%d", &m);
	
	return m;
}

void completar_matriz (int m, int matriz_A [m][m]){
	int a, b;
	for (a=0; a<m; a++){
		for (b=0; b<m; b++){
			if (a==b){
				matriz_A [a][b]= 1;
			}
			
			else {
				matriz_A [a][b]= 0;
			}	
		}
	}
}

void imprimir (int m, int matriz_A [m][m]){
	int a, b;
	printf("\n");
	
	for (a=0; a<m; a++){
		printf ("\t (%d)", a+1);
	}
		
	for (a=0; a<m; a++){
		printf("\n");
		printf ("(%d)", a+1);
		for (b=0; b<m; b++){
			printf ("\t %d", matriz_A [a][b]);
		}
	}
}

int main (){
	int tamano;
	tamano = tamano_matriz ();
	int matriz_A [tamano][tamano];
	completar_matriz (tamano, matriz_A);
	imprimir (tamano, matriz_A);
	 
	return 0;
}

