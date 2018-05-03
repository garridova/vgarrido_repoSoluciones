/* Algoritmo narrado
 *Declar variables.
 *crear una funcion.
 *realizar un ejercicio que defina la probabilidad de que una persona este infectada.  
 *iniciar una funcion main. 
 *llamar la funcion creada anteriormente. 
 *mostrar en pantalla el resultado.
 *retornar en 0; 
 */ 

#include <stdio.h>

float probabilidadinfeccion ()
{
	float poblacion = 100000;
	float porcentaje = 0.01;
	float resultado;
	
	resultado = (1/poblacion)*porcentaje;
	printf ("La probabilidad de que una persona este infectada es de %f", resultado);
	
	return 0;
}

int main ()
{
	probabilidadinfeccion ();
	
	return 0;
}	
