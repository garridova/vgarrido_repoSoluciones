#include <stdio.h>
int main ()
{
	int numero;
	int cuadrado;
	int cubo;
	
	printf ("Ingrese numero: ");
	scanf ("%d", &numero);
	
	printf ("\n");
	cuadrado= (numero*numero);
	printf ("Valor cuadrado: %d\n", cuadrado);
	
	printf ("\n");
	cubo= (numero*numero*numero);
	printf ("Valor cubo: %d\n", cubo);
	
	return 0;
}

	
