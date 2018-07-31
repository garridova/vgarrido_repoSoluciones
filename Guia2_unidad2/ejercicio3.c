//Cree una matriz cuadrada A de NxN, luego pida al usuario rellenarla. Al final del proceso, entregue alun resumen con: La matriz, la sumatoria de los valores de sus filas y luego la sumatoria de los valoresde toda la matriz.
#include <stdio.h>

void imprimir_matriz (int m, int matriz_A [m][m]){
	int a, b;
	printf ("\n");
	
	for (a=0; a<m; a++){
		printf("\t (%d)", a+1);
	}
	for (a=0; a<m; a++){
		printf ("\n");
		printf ("(%d)", a+1);
		for (b=0; b<m; b++){
			printf ("\t %d", matriz_A [a][b]);
		}
	}
}

void completar_matriz (int m, int matriz_A [m][m]){
	int a, b;
	for (a=0; a<m; a++){
		printf("\n");
		for (b=0; b<m; b++){
			printf ("Ingrese la coordenada para %d,%d: ", a,b);
			scanf ("%d", &matriz_A [a][b]);
		}
	}
}
void sumar_matriz (int m, int matriz_A [m][m]){
	int a, b;
	int suma=0;
	
	printf ("\n");
	for (a=0; a<m; a++){
		int suma_filas=0;
		for (b=0; b<m; b++){
			suma_filas+= matriz_A [a][b];
			suma+= matriz_A [a][b];
	}
	printf ("\nSuma fila (%d): %d", a+1,suma_filas);
}
	printf ("\nSuma matriz: %d", suma);
}

int main (){
	int m; 
	printf ("Ingrese el tamaño para la matriz: ");
	scanf ("%d", &m);

	int matriz_A [m][m];
	completar_matriz (m, matriz_A );
	imprimir_matriz (m, matriz_A);
	sumar_matriz (m, matriz_A);

	
	return 0;
}
 

