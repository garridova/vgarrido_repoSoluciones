/* Algoritmo narrado
 *Declarar variables de tipo float. 
 *crear funcion.
 *pedir numero de huevos y guardar este dato, pedir el numero de comensales y nuevamente guardar.
 *realizar ejercicios para calcular cuantos huevos se deben comer cada comensal.
 *calcular los huevos comidos por cada uno.
 *calcular el dinero que se debe pagar a manuel y juan.  
 *iniciar funcion main.
 *pedir la funcion.
 *mostrar en pantalla los resultados calculados.
 *retornar en 0.
 */
  
#include <stdio.h>

float reparto_dinero ()
{
	float huevos, comensales, huevoscomidos, preciohuevos=10; 
	float juan=5, manuel=3; 
	float porcentajemanuel, porcentajejuan;
	float pagomanuel, pagojuan; 
	
	printf ("Ingrese numero de huevos: ");
	scanf ("%f", &huevos);
	printf ("Ingrese numero de comensales: ");
	scanf ("%f", &comensales);
	
	printf ("\n");
	huevoscomidos = huevos/comensales;
	printf ("Huevos comidos por comensal: %f\n", huevoscomidos);
	
	porcentajemanuel = (manuel - huevoscomidos);
	printf ("Porcentaje de huevo que Manuel le dio a Antonio: %f\n", porcentajemanuel);
	
	porcentajejuan = (juan - huevoscomidos);
	printf ("Porcentaje de huevo que Juan le dio a Antonio %f\n", porcentajejuan);
	
	pagomanuel = porcentajemanuel * preciohuevos; 
	printf ("Se debe pagar %f a Manuel\n", pagomanuel);
	
	pagojuan = porcentajejuan * preciohuevos;
	printf ("Se debe pagar %f a Juan\n", pagojuan);
	
	return 0;
}
	
int main ()
{
	reparto_dinero ();
	return 0;
}		
