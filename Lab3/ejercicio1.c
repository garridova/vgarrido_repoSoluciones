/* Algoritmo Narrado
 *Declarar las variables de tipo int.  
 *Crear una funcion para calcular el sueldo total.
 *Crear una nueva funcion para calcular la cantidad de horas.
 *Realizar un ciclo de tipo for.
 *Calcular la cantidad de horas.
 *Pedir el sueldo por las horas trabajadas.
 *Llamar las funciones.
 *retornar en 0.
 */

#include <stdio.h>
#include <stdlib.h>

int sueldo (int sueldoxhoras, int horasxdias){
	 int sueldototal;
	 sueldototal = (horasxdias*sueldoxhoras);
	 return sueldototal; 
} 
 
void sueldopersona (int sueldototal){
	printf ("Sueldo recibido: %d\n", sueldototal);
}
 
 
int main ()
{
	int hrs;
	int hrstotales=0;
	int sueldoxhoras;
	int sueldototal=0; 
	int j;
	 
		for (j=0; j < 6; j++){
			printf ("Horas trabajadas en el dia %d :\n",j+1);
			scanf ("%d", &hrs);
			hrstotales = (hrstotales + hrs);
		}
		
	printf ("Ingrese sueldo por horas trabajadas: ");
	scanf ("%d", &sueldoxhoras);
	sueldototal = sueldo (sueldoxhoras, hrstotales);
	sueldopersona (sueldototal);
	return 0;
}	
	
	
	
		
