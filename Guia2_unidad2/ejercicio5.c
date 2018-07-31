//Dada una matriz A (MxN) de tipo entero, construya un programa para calcular la Traspuesta de dicha matriz. La traspuesta de una matrizse obtiene al escribir las filas de la matriz A como columnas
#include <stdio.h>

void completar_matriz (int fila, int columna, int Matriz_A [fila][columna]){
	int a, b; 
	
	for (a=0; a<fila; a++){
	printf ("\n");
		for (b=0; b<columna; b++){
		printf("Ingrese el valor de la cordenada %d,%d: ", a+1, b+1);
		scanf ("%d", &Matriz_A[a][b]);;
		}
	}
}
void Imprimir (int fila,int columna, int matriz_A [fila][columna]){
	int a, b;
	
	printf ("\n");
	printf ("Matriz original\n");
	for (a=0; a<columna; a++){
		printf ("\t(%d)", a+1);
	}
	for (a=0; a<fila; a++){
		printf ("\n");
		printf ("(%d)", a+1);
		for (b=0; b<columna; b++){
			printf ("\t %d", matriz_A [a][b]);
		}
	}	
}

void traspuesta (int fila, int columna, int Matriz_A [fila][columna]){
	int a, b;
	
	printf ("\n");
	printf ("\nMatriz traspuesta\n");
	for (a=0; a<fila; a++){
		printf ("\t(%d)", a+1);
	}
	for (a=0; a<columna; a++){
		printf ("\n");
		printf ("(%d)", a+1);
		for (b=0; b<fila; b++){
			printf ("\t %d", Matriz_A [b][a]);
		}
	}	
}

int main(){
	int fila, columna;
	
	printf ("Ingrese el numero de filas que desea: ");
	scanf ("%d", &fila); 
	
	printf ("Ingrese el numero de columnas que desea: ");
	scanf ("%d", &columna);
	
	int Matriz_A [fila][columna];
	
	completar_matriz (columna, fila, Matriz_A);
	Imprimir (fila, columna, Matriz_A);
	traspuesta (fila, columna, Matriz_A);
	return 0;
}
