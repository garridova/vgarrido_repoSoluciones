#include <stdio.h>
int main ()
{
	int sueldo_base;
	int sueldo_total;
	int ventas;
	float comision;
	
	printf ("Ingresar sueldo base:\n");
	scanf ("%d", &sueldo_base);
	printf ("\n");
	printf ("Ingrese ventas:\n");
	scanf ("%d", &ventas);
	
	comision=(ventas * 0.07);
	printf ("\n");
	printf ("El valor de la comision es: $ %f", comision);
    printf ("\n");
	sueldo_total= (sueldo_base + comision);
	printf ("\n");
	printf ("El sueldo total es: $ %d", sueldo_total);
	
	return 0;
}
