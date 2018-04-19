/* Algoritmo Narrado
 *Declarar cuatro variables de tipo float.
 *Pedir al usuario el peso en kilogramos. 
 *Realizar tres ejercicios con la cantidad diaria de gotas que debe ingerir. 
 *Mostrar al usuario cuantas y que cantidad de gotas debe ingerir. 
 *Se returna en 0.
 */
 
#include <stdio.h> 
int main ()
{
	float medidapeso;
	float cantidad_diaria;
	float gotas;
	float gotasmenor;

	printf ("Ingrese peso de juanito en kilogramos: ");
	scanf ("%f", &medidapeso);

	cantidad_diaria = (medidapeso * 0.2);
	
	gotas = (cantidad_diaria * 2500/500);
	
	gotasmenor = (gotas/3);
	
	printf ("Si Juanito es menor a un año de edad debe ingerir: %.1f", cantidad_diaria);
	printf ("\n");
	printf ("Si Juanito es mayor a un año de edad debe ingerir: %.1f", gotasmenor);
	
	return 0;
}	
