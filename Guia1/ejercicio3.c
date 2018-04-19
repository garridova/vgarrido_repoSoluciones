#include <stdio.h>
int main ()
{
	int a;
	int b;
	int calculo_hipotenusa;
	
	printf ("Indique valor de a: ");
	scanf ("%d", &a);
	printf ("\n");
	printf ("Indique valor de b: ");
	scanf ("%d", &b);
	
	printf ("\n");
	calculo_hipotenusa= (a*a+b*b);
	printf ("Resultado Hipotenusa: %d", calculo_hipotenusa);
	
	return 0;
}
