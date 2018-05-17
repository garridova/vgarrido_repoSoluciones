/* Algoritmo Narrado
 *Realizar un procedimiento
 *Declarar variables de tipo int  
 *iniciar un ciclo while 
 *Iniciar funcion main
 *Declarar variables 
 *Pedir y guardar datos
 *Realizar ciclo while 
 *Retornar en 0. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int descomponer (int numero) {	
	int suma=0,resto;
	
	while (numero > 0){
		resto = numero%10;
		suma += resto;
		numero=numero/10;
	}
	return suma;
}
																																								
int main()
{
	int numero, num;
	printf ("Ingrese numero: ");
	scanf ("%d", &numero);
	
	num = descomponer (numero);
	
	while (num>10){
		num=descomponer(num);
	}

	printf ("%d", num);
}
