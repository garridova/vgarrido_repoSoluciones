/*ALGORITMO NARRADO
 *Declarar 3 variables de tipo float.
 *Pedir datos.
 *Guardar datos.
 *Indicar descuento.
 *Calcular los tipos de descuento.
 *Si se compra un traje superior a 2500.00 el traje tendra 15% de descuento.
 *Si no, el traje tendra un 8% de descuento.
 *Mostrar el precio del traje.
 *Se retorna en 0.
 */

#include <stdio.h>

int main () 
{
     float preciotraje;
     float descuento1;
     float descuento2;
     
     printf("Ingrese el precio del traje: ");
     scanf ("%f", &preciotraje);
     
     if (preciotraje > 2500.00){
         printf ("Este traje tiene un descuento \n");
         descuento1= (0.85*preciotraje);
         printf ("El precio de este traje es: $ %f", descuento1);
     }
     else if (preciotraje<=2500.00){
		 printf ("Este traje tiene un descuento \n");
		 descuento2= (0.08*preciotraje);
		 printf ("El precio de este traje es: $ %f", descuento2);
     }
     return 0;
}
