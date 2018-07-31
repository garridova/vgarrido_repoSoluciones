//Cree un programa que lea los elementos de una matriz de 4 X 5 y genere un vector de largo 4 en el que cada elemento contenga la sumatoria de los elementos de cada fila. El programa debe mostrar la matriz original y el vector en este formato (evidentemente, los valores deben ser los que correspondan a lo introducido por el usuario)
#include <stdio.h>

void imprimir_matriz (int matriz [4][5]){
	int a, b; 
		
	printf ("\n");
	for (a=0; a<5; a++){
		printf ("\t(%d)", a+1);
	}
	for (a=0; a<4; a++){
		printf ("\n");
		printf ("(%d)", a+1);
		for (b=0; b<5; b++){
			printf ("\t %d", matriz [a][b]);
	}
}
}

void completar_matriz (int matriz [4][5]){
	int a, b; 
	
	for (a=0; a<4; a++){
		printf ("\n");
			for (b=0; b<5; b++){
			printf("Ingrese el valor de la cordenada %d,%d: ", a+1, b+1);
			scanf ("%d", &matriz [a][b]);
		}
	}
}

void imprimir_vector (int matriz [4][5], int vector[4]){
	int a, b;
	
	printf ("\n");
	printf ("\nElementos resultantes de la suma: \n");
	for (a=0; a<4; a++){
		int sumafilas=0;

		for (b=0; b<5; b++){
			sumafilas += matriz [a][b];
			}
			
		vector [a] = sumafilas;
		printf ("[%d] corresponde a la fila %d\n", vector[a], a+1);
	}
	
}

int main(){
	int matriz [4][5];
	int vector [4];
	completar_matriz (matriz);
	imprimir_matriz (matriz);
	imprimir_vector (matriz, vector);
	
return 0;
}
