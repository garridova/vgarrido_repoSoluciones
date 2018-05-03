/* Algoritmo Narrado
 *Declarar variables.
 *Crear una funcion.   
 *Pedir un numero cualquiera. 
 *Realizar un mod %10 que permita invertir el numero pedido.  
 *Iniciar funcion int main.
 *Pedir la funcion creada.
 *Mostrar en pantalla el numero pedido de forma invertida. 
 *Se retorna en 0.
 */ 

#include <stdio.h>

int inverso_del_numero ()
{
	int num, ejercicio, ejercicio2; 
	printf ("Ingrese un numero entero que contenga max. tres digitos: ");
	scanf ("%d", &num);
	
	printf ("%d", (num%10));
	ejercicio = (num/10);
	printf ("%d", (ejercicio%10));
	ejercicio2 = (ejercicio/10);
	printf ("%d", (ejercicio2%10));
	
	
	return 0;
}

int main ()
{
	inverso_del_numero();
	
	return 0;
}		
