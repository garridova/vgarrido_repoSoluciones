#include <stdio.h>
int main ()
{
	int galon;
	int precio;
	int litros;
	
	printf ("Ingresar cantidad de galones: ");
	scanf ("%d", &galon);
	printf ("\n");
	printf ("Ingresar cantidad de litros: ");
	scanf ("%d", &litros);
	
	printf ("\n");
	galon= 3.785;
	precio= (galon*820);
	printf ("El precio total a pagar es: $ %d ", precio);
	
	return 0;
}
