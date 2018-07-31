//Dada una matriz cuadrada A, un programa que permita detectar si dicha matriz es simetrica. Se considera que una matriz es simetrica si A[i,j] = A[j,i] y esto se cumple para todo i distinto de j. La simetrıa es respecto a la diagonal principal.
#include <stdio.h>

void completar_matriz (int m, int matriz_A [m][m]){
	int a, b; 
	
	for (a=0; a<m; a++){
	printf ("\n");
		for (b=0; b<m; b++){
			printf ("Ingrese el valor para la coordenada %d,%d: ", a+1, b+1);
			scanf ("%d", &matriz_A [a][b]);
		}
	}
}
void imprimir_matriz (int m, int matriz_A [m][m]){
	int a, b;
	printf ("\n");
	for (a=0; a<m; a++){
		printf ("\t(%d)", a+1);
	}
	for (a=0; a<m; a++){
		printf ("\n");
		printf ("(%d)", a+1);
		for (b=0; b<m; b++){
			printf ("\t %d",matriz_A [a][b]);
		}
	}	
}

void simetria (int m, int matriz_A [m][m]){
	int a, b;
	int interruptor=0;
	
	for (a=0; a<m; a++){		
		for (b=0; b<m; b++){
			if (a!=b){
				if (matriz_A [a][b]== matriz_A [a][b]){
					interruptor=0;
				}
				else {
					interruptor = 1;

				}
			}
		}
	}

	if (interruptor==0){
		printf("\nLa matriz es simetrica");
	}
	
		else{
		printf("\nLa matriz no es simetrica");
		}
		
	}
	
int main(){
	int m;
	printf ("Ingrese el tamaño de la matriz: ");
	scanf ("%d", &m);
	int matriz_A [m][m];
	
	completar_matriz (m, matriz_A);
	imprimir_matriz (m,matriz_A);
	simetria (m, matriz_A);
	return 0;
}


