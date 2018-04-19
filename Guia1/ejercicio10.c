#include <stdio.h>
int main ()
{
	int costo_boleto;
	int km_recorrer;
	float costo_kilometros;
	
	printf ("Ingrese la cantidad de Kilometros que recorrerá: ");
	scanf ("%d", &km_recorrer);
	printf ("\n");
	printf ("El costo por kilometro sera: $ ");
	scanf ("%f", &costo_kilometros);
	
	costo_boleto= (costo_kilometros * km_recorrer);
	printf ("\n");
	printf ("El costo del boleto es de: $ %d\n", costo_boleto);
	
	return 0;
}
