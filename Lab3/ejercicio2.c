/* Algoritmo Narrado
 *Declaran variables de tipo int.  
 *Crear un procedimiento. 
 *Crear una funcion. 
 *Iniciar la funcion main. 
 *Llamar a la funcion dada.
 *Retornar en 0.  
 */
 
#include <stdio.h>
#include <stdlib.h>

void Estado_termometro (int n){
	printf ("0         10        20        30        40        50\n");
	printf ("|         |         |         |         |         |\n");

	int i;
	for (i=0; i < n; i++){
		printf ("-");
	}
	printf("*");
}

int solicitar_temperatura (){
	int temperatura;
	printf ("Ingrese la temperatura: ");
	scanf ("%d", &temperatura);
	
	return temperatura;
}

int main (){
	int temperatura = solicitar_temperatura();
	
	Estado_termometro(temperatura);
	
	return 0;
}
