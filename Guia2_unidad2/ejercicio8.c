//Construya un programa en Python que intercambie los renglones de una arreglo bidimensional. Los elementos del renglón 1 deben intercambiarse con el del renglón N, los del renglón 2 con los del renglón N-1, y ası́ sucesivamente.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void completar_matriz (int m, int matriz [m][m] ){
		
	srand(time(NULL));
	 int a, b, num;
	
	for(a=0; a<m; a++){
		for (b=0; b<m; b++){
			num = 1+(rand()%20); 
			matriz[a][b]=num;
		}
	}

}

void imprimir_matriz (int m, int matriz [m][m]){
	int a, b;
	
	for(a=0; a<m; a++){
		for (b=0; b<m; b++){
			printf("\t%d", matriz[a][b]);
		}
		printf("\n");
	}

}

void Cambio (int m, int matriz [m][m]){
	
	int a, b;
	printf ("\n");
	for (a=m-1; a>=0; a--){
		printf ("\n");
		for (b=0; b<m; b++){
			printf ("\t%d", matriz [a][b]);
		}
	}

}


int main (){
	int m;
	printf ("Ingrese el tamaño de la matriz: ");
	scanf ("%d", &m);
	
	int matriz [m][m];
	
	completar_matriz (m, matriz);
	printf("\n");
	imprimir_matriz (m, matriz);
	printf("\n");
	Cambio (m, matriz);
	
	
	
	return 0;
}
