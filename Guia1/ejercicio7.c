#include <stdio.h>
int main ()
{
	int dias;
	int segundos;
	
	dias= 86400;
	
	printf ("Ingrese los dias: ");
	scanf ("%d", &dias);
	printf ("\n");
	
	segundos= (dias*86400);
	printf ("Los segundos que hay en un dia son: %d", segundos);
	
	return 0;
}
	
	
