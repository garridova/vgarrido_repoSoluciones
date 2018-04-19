#include <stdio.h>
int main ()
{
	float x;
	float ejercicio;
	
	printf ("Valor de x: ");
	scanf ("%f", &x);
	
	printf ("\n");
	
	ejercicio= (x*x*x) + 2*(x*x) + 3*(x)+ 5;
	printf ("Resultado: %1.f", ejercicio);
	
	return 0;
}
