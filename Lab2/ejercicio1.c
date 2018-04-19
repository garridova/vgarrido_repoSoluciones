/* Algoritmo Narrado
 *Declarar 3 variables de tipo int. 
 *Pedir al usuario que ingrese un numero.
 *Guardar el dato pedido.
 *Abrir un ciclo for. 
 *Dentro del ciclo for abrir un nuevo ciclo for donde se ingresaran condiciones if para determinar si el numero es primo.
 *Mostrar al usuario los numeros que son primos y agregar un contador que nos diga cual es la cantidad total de estos.
 *Se returna en 0.
 */
 
#include <stdio.h>
int main ()
{
	int divisores;
	int numero;
	int i;
	int b;
	int contador=0;
	
	printf ("Ingrese un numero menor a 1.000.000: ");
	scanf ("%d", &numero);
	
	for (b=2; b<=numero; b++)
	{	
		divisores=0;
		for (i=1; i<=numero; i++)
		{
	
			if (b % i == 0)
			{
				divisores++;
			}
		}
		if (divisores == 2)
		{
			printf ("%d,\n", b);
			contador++;
		}
	}
		printf ("Numeros Primos: %d", contador);
	return 0;	
}	
	
