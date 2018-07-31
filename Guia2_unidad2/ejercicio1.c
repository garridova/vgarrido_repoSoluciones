//Escriba un programa que cree una matriz cuadrada A de NxN, luego rellenela de ceros e imprımala en pantalla
#include <stdio.h>

int tamano_matriz (){
	int tamano; 
	printf ("Ingrese el tamaño de la matriz: ");
	scanf ("%d", &tamano);
	return tamano;
}

void completar_matriz (int tamano, int matriz_A [tamano][tamano]){
	int a, b;
	for (a=0; a<tamano; a++){
		for (b=0; b<tamano; b++){
			matriz_A [a][b]=0;
		}
	}
}
void imprimir_matriz (int tamano, int matriz_A [tamano][tamano]){
	int a, b; 
	printf ("\n");
	
	for (a=0; a<tamano; a++){
		printf ("\t(%d)", a+1);
	}
	for (a=0; a<tamano; a++){
		printf ("\n");
		printf ("(%d)", a+1);
		
		for (b=0; b<tamano; b++){
			printf ("\t %d", matriz_A [a][b]);
			
		}
	}
}

int main (){
	int tamano;
	tamano = tamano_matriz();
	
	int matriz_A [tamano][tamano];
	completar_matriz (tamano, matriz_A);
	imprimir_matriz (tamano, matriz_A);
	
	return 0;
}

